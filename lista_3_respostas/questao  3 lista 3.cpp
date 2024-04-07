#include <iostream>
using namespace std;

int main() {
    int numero, d1, d2, d3, d4, d5;

    // Solicita ao usuário que insira o número de cinco dígitos
    cout << "Digite um número de cinco dígitos: ";
    cin >> numero;

    // Extrai os dígitos individuais do número
    d1 = numero / 10000;  // Primeiro dígito da esquerda para a direita
    d2 = (numero % 10000) / 1000;  // Segundo dígito da esquerda para a direita
    d3 = (numero % 1000) / 100;    // Terceiro dígito da esquerda para a direita
    d4 = (numero % 100) / 10;      // Quarto dígito da esquerda para a direita
    d5 = numero % 10;              // Quinto dígito da esquerda para a direita

    // Verifica se o número é um palíndromo
    if (d1 == d5 && d2 == d4) {
        cout << "O número " << numero << " é um palíndromo." << endl;
    } else {
        cout << "O número " << numero << " não é um palíndromo." << endl;
    }

    return 0;
}
