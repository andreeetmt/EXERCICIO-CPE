#include <iostream>
#include <fstream>
#include <sstream> // Para stringstream
#include <vector>
using namespace std;

// Defini��o da estrutura Produto
struct Produto {
    int codigo;
    string nome;
    float preco;
};

// Fun��o para adicionar um novo produto ao arquivo
void adicionarProduto(ofstream& arquivo, const Produto& produto) {
    arquivo << produto.codigo << "," << produto.nome << "," << produto.preco << endl;
}

// Fun��o para listar todos os produtos do arquivo
void listarProdutos(ifstream& arquivo) {
    cout << "\nLista de Produtos:" << endl;
    string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
}

// Fun��o para buscar um produto pelo c�digo
void buscarProduto(ifstream& arquivo, int codigoBusca) {
    cout << "\nBuscando produto com c�digo " << codigoBusca << ":" << endl;
    string linha;
    bool encontrado = false;
    while (getline(arquivo, linha)) {
        stringstream ss(linha); // Cria um stringstream com a linha lida do arquivo
        string codigoStr;
        getline(ss, codigoStr, ','); // Extrai o c�digo como string at� a v�rgula

        // Converte a string para int
        int codigo = stoi(codigoStr);

        if (codigo == codigoBusca) {
            string nome;
            getline(ss, nome, ','); // Extrai o nome at� a pr�xima v�rgula
            string precoStr;
            getline(ss, precoStr); // Extrai o pre�o at� o fim da linha
            float preco = stof(precoStr); // Converte a string para float

            cout << "C�digo: " << codigo << ", Nome: " << nome << ", Pre�o: " << preco << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Produto n�o encontrado.\n";
    }
}

int main() {
    ofstream arquivo_saida("produtos.txt", ios::app); // Abre o arquivo para escrita (append)
    ifstream arquivo_entrada("produtos.txt"); // Abre o arquivo para leitura

    if (!arquivo_saida.is_open() || !arquivo_entrada.is_open()) {
        cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }

    // Exemplo de adi��o de produtos
    Produto p1 = {1, "Produto A", 10.50};
    Produto p2 = {2, "Produto B", 20.75};
    Produto p3 = {3, "Produto C", 15.99};

    adicionarProduto(arquivo_saida, p1);
    adicionarProduto(arquivo_saida, p2);
    adicionarProduto(arquivo_saida, p3);

    // Exemplo de listagem de produtos
    listarProdutos(arquivo_entrada);

    // Exemplo de busca de produto por c�digo
    int codigoBusca;
    cout << "\nDigite o c�digo do produto que deseja buscar: ";
    cin >> codigoBusca;
    buscarProduto(arquivo_entrada, codigoBusca);

    // Fechando os arquivos
    arquivo_saida.close();
    arquivo_entrada.close();

    return 0;
}
