#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n1, res;
    n1 = rand() % 1000;

    cout << "Insira um n�mero de 1 a 1000: " << endl;

    do {
        cin >> res;

        if (res == n1)
            cout << "Parab�ns! Voc� acertou!!" << endl;
        else if (res > n1)
            cout << "Tente um n�mero menor, por favor." << endl;
        else
            cout << "Tente um n�mero maior, por favor." << endl;
            
    } while (res != n1);

    return 0;
}
