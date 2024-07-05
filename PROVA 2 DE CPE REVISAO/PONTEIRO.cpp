#include <iostream>
using namespace std;

int main() {
    // Exemplo de uso de ponteiros
    int numero = 10;
    int *ptrNumero; // Declaração de um ponteiro para int

    ptrNumero = &numero; // Atribui o endereço de 'numero' ao ponteiro

    // Mostra o valor da variável 'numero' e o valor apontado pelo ponteiro
    cout << "Valor de numero: " << numero << endl;
    cout << "Valor apontado por ptrNumero: " << *ptrNumero << endl;

    // Alterando o valor através do ponteiro
    *ptrNumero = 20;

    // Mostra o novo valor da variável 'numero'
    cout << "Novo valor de numero: " << numero << endl;

    return 0;
}
