#include <iostream>
#include <string>
using namespace std;

// Defini��o de uma struct para representar um livro
struct Livro {
    string titulo;
    string autor;
    float preco;
    int quantidade;

    // Fun��o para entrada de dados do livro
    void lerDados() {
        cin.ignore(); // Limpa o buffer do teclado
        cout << "Digite o t�tulo do livro: ";
        getline(cin, titulo); // L� o t�tulo com espa�os
        cout << "Digite o nome do autor: ";
        getline(cin, autor); // L� o nome do autor com espa�os
        cout << "Digite o pre�o do livro: ";
        cin >> preco;
        cout << "Digite a quantidade de c�pias: ";
        cin >> quantidade;
        cin.ignore(); // Limpa o buffer do teclado
    }

    // Fun��o para mostrar os dados do livro
    void mostrarDados() {
        cout << "\nInforma��es do livro:" << endl;
        cout << "T�tulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Pre�o: R$ " << preco << endl;
        cout << "Quantidade: " << quantidade << " c�pia(s)" << endl;
    }

    // Fun��o para calcular o pre�o total
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

    // Calcula e mostra o pre�o total
    cout << "Pre�o total: R$ " << livro1.calcularPrecoTotal() << endl;

    return 0;
}
