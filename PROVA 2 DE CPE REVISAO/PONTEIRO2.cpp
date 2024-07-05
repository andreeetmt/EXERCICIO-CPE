#include <iostream>
using namespace std;

int main() {
    // Exemplo de aloca��o din�mica de mem�ria para um array de inteiros
    int tamanho;
    cout << "Digite o tamanho do array: ";
    cin >> tamanho;

    // Aloca��o din�mica de mem�ria para o array
    int *ptrArray = new int[tamanho];

    // Preenchendo o array atrav�s do ponteiro
    for (int i = 0; i < tamanho; ++i) {
        ptrArray[i] = i * 2;
    }

    // Mostrando os elementos do array usando o ponteiro
    cout << "Elementos do array:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << ptrArray[i] << " ";
    }
    cout << endl;

    // Liberando a mem�ria alocada
    delete[] ptrArray;

    return 0;
}
