#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n1, res;
    n1 = rand() % 1000;

    cout << "Insira um número de 1 a 1000: " << endl;

    do {
        cin >> res;

        if (res == n1)
            cout << "Parabéns! Você acertou!!" << endl;
        else if (res > n1)
            cout << "Tente um número menor, por favor." << endl;
        else
            cout << "Tente um número maior, por favor." << endl;
            
    } while (res != n1);

    return 0;
}
