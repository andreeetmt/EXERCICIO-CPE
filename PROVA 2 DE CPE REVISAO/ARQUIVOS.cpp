#include <iostream>
#include <fstream>
#include <sstream> // Para stringstream
#include <vector>
using namespace std;

// Definição da estrutura Produto
struct Produto {
    int codigo;
    string nome;
    float preco;
};

// Função para adicionar um novo produto ao arquivo
void adicionarProduto(ofstream& arquivo, const Produto& produto) {
    arquivo << produto.codigo << "," << produto.nome << "," << produto.preco << endl;
}

// Função para listar todos os produtos do arquivo
void listarProdutos(ifstream& arquivo) {
    cout << "\nLista de Produtos:" << endl;
    string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
}

// Função para buscar um produto pelo código
void buscarProduto(ifstream& arquivo, int codigoBusca) {
    cout << "\nBuscando produto com código " << codigoBusca << ":" << endl;
    string linha;
    bool encontrado = false;
    while (getline(arquivo, linha)) {
        stringstream ss(linha); // Cria um stringstream com a linha lida do arquivo
        string codigoStr;
        getline(ss, codigoStr, ','); // Extrai o código como string até a vírgula

        // Converte a string para int
        int codigo = stoi(codigoStr);

        if (codigo == codigoBusca) {
            string nome;
            getline(ss, nome, ','); // Extrai o nome até a próxima vírgula
            string precoStr;
            getline(ss, precoStr); // Extrai o preço até o fim da linha
            float preco = stof(precoStr); // Converte a string para float

            cout << "Código: " << codigo << ", Nome: " << nome << ", Preço: " << preco << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Produto não encontrado.\n";
    }
}

int main() {
    ofstream arquivo_saida("produtos.txt", ios::app); // Abre o arquivo para escrita (append)
    ifstream arquivo_entrada("produtos.txt"); // Abre o arquivo para leitura

    if (!arquivo_saida.is_open() || !arquivo_entrada.is_open()) {
        cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }

    // Exemplo de adição de produtos
    Produto p1 = {1, "Produto A", 10.50};
    Produto p2 = {2, "Produto B", 20.75};
    Produto p3 = {3, "Produto C", 15.99};

    adicionarProduto(arquivo_saida, p1);
    adicionarProduto(arquivo_saida, p2);
    adicionarProduto(arquivo_saida, p3);

    // Exemplo de listagem de produtos
    listarProdutos(arquivo_entrada);

    // Exemplo de busca de produto por código
    int codigoBusca;
    cout << "\nDigite o código do produto que deseja buscar: ";
    cin >> codigoBusca;
    buscarProduto(arquivo_entrada, codigoBusca);

    // Fechando os arquivos
    arquivo_saida.close();
    arquivo_entrada.close();

    return 0;
}
