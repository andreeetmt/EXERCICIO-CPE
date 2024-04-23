#include <iostream>
using namespace std;


void torresDeHanoi(int numDiscos, int estacaOrigem, int estacaDestino, int estacaTemporaria) {
    
    if (numDiscos == 1) {
        cout << estacaOrigem << " ? " << estacaDestino << endl;
        return;
    }

   
    torresDeHanoi(numDiscos - 1, estacaOrigem, estacaTemporaria, estacaDestino);

    
    cout << estacaOrigem << " ? " << estacaDestino << endl;

    
    torresDeHanoi(numDiscos - 1, estacaTemporaria, estacaDestino, estacaOrigem);
}

int main() {
    int numDiscos;
    
    
    cout << "Digite o número de discos: ";
    cin >> numDiscos;

    
    cout << "Instruções para resolver as Torres de Hanoi:" << endl;
    torresDeHanoi(numDiscos, 1, 3, 2); 

    return 0;
}
