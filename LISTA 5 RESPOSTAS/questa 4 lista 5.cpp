#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int n1, n2, resposta;
    bool certo;

    
    srand(time(0));

    while (true) {
        certo = true; 

        n1 = rand() % 10;
        n2 = rand() % 10;

        cout << "Qual � o resultado de " << n1 << " vezes " << n2 << "?" << endl;
        cin >> resposta;

        if (resposta == n1 * n2) {
            cout << "Voc� est� correto! Parab�ns!" << endl;
        } else {
            cout << "Tente novamente!" << endl;
            certo = false; 
        }

        if (!certo) 
            break;
    }

    return 0;
}
