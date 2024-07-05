#include <iostream>
#include <string>
using namespace std;

// Definição de uma struct para representar um livro
struct Livro {
    string titulo;
    string autor;
    float preco;
    int quantidade;

    // Função para entrada de dados do livro
    void lerDados() {
        cin.ignore(); // Limpa o buffer do teclado
        cout << "Digite o título do livro: ";
        getline(cin, titulo); // Lê o título com espaços
        cout << "Digite o nome do autor: ";
        getline(cin, autor); // Lê o nome do autor com espaços
        cout << "Digite o preço do livro: ";
        cin >> preco;
        cout << "Digite a quantidade de cópias: ";
        cin >> quantidade;
        cin.ignore(); // Limpa o buffer do teclado
    }

    // Função para mostrar os dados do livro
    void mostrarDados() {
        cout << "\nInformações do livro:" << endl;
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Preço: R$ " << preco << endl;
        cout << "Quantidade: " << quantidade << " cópia(s)" << endl;
    }

    // Função para calcular o preço total
    float calcularPrecoTotal() {
        return preco * quantidade;
    }
};

int main() {
    // Exemplo de uso da struct Livro
    Livro livro1;

    // Entrada de dados do livro
    livro1.lerDados();

    // Mostra os dados do livro
    livro1.mostrarDados();

    // Calcula e mostra o preço total
    cout << "Preço total: R$ " << livro1.calcularPrecoTotal() << endl;

    return 0;
}
