#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int numero = rand() % 100 + 1; 
    int tentativa = 0;
    int palpite;

    cout << "Pense em um número de 1 a 100." << endl;

    while (tentativa < 7) {
        cout << "Seu número é " << numero << " ? (Digite 1 se eu acertei, 2 se for maior e 3 se for menor): ";
        cin >> palpite;
        
        if (palpite == 1) {
            cout << "IHUUUL ACERTEI! O número é " << numero << endl;
            break;
        } else if (palpite == 2) {
            numero = rand() % (100 - numero) + numero + 1;
        } else if (palpite == 3) {
            numero = rand() % numero;
        } 
        
        
    }
    
    if (tentativa == 7) {
        cout << "Não consegui adivinhar o número em 7 tentativas. Você venceu!" << endl;
    }

    return 0;
}
