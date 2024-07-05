#include <iostream>
using namespace std;

int main() {
    // Exemplo de uso de ponteiros
    int numero = 10;
    int *ptrNumero; // Declara��o de um ponteiro para int

    ptrNumero = &numero; // Atribui o endere�o de 'numero' ao ponteiro

    // Mostra o valor da vari�vel 'numero' e o valor apontado pelo ponteiro
    cout << "Valor de numero: " << numero << endl;
    cout << "Valor apontado por ptrNumero: " << *ptrNumero << endl;

    // Alterando o valor atrav�s do ponteiro
    *ptrNumero = 20;

    // Mostra o novo valor da vari�vel 'numero'
    cout << "Novo valor de numero: " << numero << endl;

    return 0;
}
