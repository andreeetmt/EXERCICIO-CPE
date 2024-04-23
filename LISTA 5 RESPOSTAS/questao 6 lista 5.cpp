#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int n1, n2, resposta;
    bool certo;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    do {
        certo = true; // Reseta a variável certo para cada nova pergunta

        n1 = rand() % 10;
        n2 = rand() % 10;

        cout << "Qual é o resultado de " << n1 << " vezes " << n2 << "?" << endl;
        cin >> resposta;

        if (resposta == n1 * n2) {
            cout << "Você está correto! Parabéns!" << endl;
        } else {
            cout << "Tente novamente!" << endl;
            certo = false; // Define certo como false se a resposta estiver incorreta
        }

    } while (!certo); // Continua fazendo perguntas até que certo seja true

    return 0;
}
