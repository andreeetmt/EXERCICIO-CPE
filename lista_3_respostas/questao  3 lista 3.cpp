#include <iostream>
using namespace std;

int main() {
    int numero, d1, d2, d3, d4, d5;

    // Solicita ao usu�rio que insira o n�mero de cinco d�gitos
    cout << "Digite um n�mero de cinco d�gitos: ";
    cin >> numero;

    // Extrai os d�gitos individuais do n�mero
    d1 = numero / 10000;  // Primeiro d�gito da esquerda para a direita
    d2 = (numero % 10000) / 1000;  // Segundo d�gito da esquerda para a direita
    d3 = (numero % 1000) / 100;    // Terceiro d�gito da esquerda para a direita
    d4 = (numero % 100) / 10;      // Quarto d�gito da esquerda para a direita
    d5 = numero % 10;              // Quinto d�gito da esquerda para a direita

    // Verifica se o n�mero � um pal�ndromo
    if (d1 == d5 && d2 == d4) {
        cout << "O n�mero " << numero << " � um pal�ndromo." << endl;
    } else {
        cout << "O n�mero " << numero << " n�o � um pal�ndromo." << endl;
    }

    return 0;
}
