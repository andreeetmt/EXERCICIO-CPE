#include <iostream>
using namespace std;

int main() {
    // Exemplo de alocação dinâmica de memória para um array de inteiros
    int tamanho;
    cout << "Digite o tamanho do array: ";
    cin >> tamanho;

    // Alocação dinâmica de memória para o array
    int *ptrArray = new int[tamanho];

    // Preenchendo o array através do ponteiro
    for (int i = 0; i < tamanho; ++i) {
        ptrArray[i] = i * 2;
    }

    // Mostrando os elementos do array usando o ponteiro
    cout << "Elementos do array:" << endl;
    for (int i = 0; i < tamanho; ++i) {
        cout << ptrArray[i] << " ";
    }
    cout << endl;

    // Liberando a memória alocada
    delete[] ptrArray;

    return 0;
}
