#include <iostream>
using namespace std;

int main() {
    double e = 1; // Inicializa a variável para armazenar o valor de e
    double fatorial = 1; // Inicializa o fatorial para o primeiro termo da série
    int termos = 10; // Número de termos a serem somados

    // Loop para adicionar os termos da série
    for (int i = 1; i <= termos; i++) {
        fatorial *= i; // Calcula o fatorial
        e += 1.0 / fatorial; // Adiciona o termo à soma de e
    }

    // Imprime o valor calculado de e
    cout << "O valor aproximado de e é: " << e << endl;

    return 0;
}
