#include <iostream>
using namespace std;

int main() {
    double e = 1; // Inicializa a vari�vel para armazenar o valor de e
    double fatorial = 1; // Inicializa o fatorial para o primeiro termo da s�rie
    int termos = 10; // N�mero de termos a serem somados

    // Loop para adicionar os termos da s�rie
    for (int i = 1; i <= termos; i++) {
        fatorial *= i; // Calcula o fatorial
        e += 1.0 / fatorial; // Adiciona o termo � soma de e
    }

    // Imprime o valor calculado de e
    cout << "O valor aproximado de e �: " << e << endl;

    return 0;
}
