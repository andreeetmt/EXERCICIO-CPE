#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int n1, n2, resposta;
    bool certo;

    // Inicializa o gerador de n�meros aleat�rios
    srand(time(0));

    do {
        certo = true; // Reseta a vari�vel certo para cada nova pergunta

        n1 = rand() % 10;
        n2 = rand() % 10;

        cout << "Qual � o resultado de " << n1 << " vezes " << n2 << "?" << endl;
        cin >> resposta;

        if (resposta == n1 * n2) {
            cout << "Voc� est� correto! Parab�ns!" << endl;
        } else {
            cout << "Tente novamente!" << endl;
            certo = false; // Define certo como false se a resposta estiver incorreta
        }

    } while (!certo); // Continua fazendo perguntas at� que certo seja true

    return 0;
}
