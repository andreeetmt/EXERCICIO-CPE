#include <iostream>
using namespace std;

void verifica(int x, int y) {
    if (x % y == 0) {
        cout << x << " � m�ltiplo de " << y << endl;
    } else {
        cout << x << " n�o � m�ltiplo de " << y << endl;
    }
}

int main() {
    int x, y; 

    
    cout << "Insira o primeiro n�mero: ";
    cin >> x;

    cout << "Insira o segundo n�mero: ";
    cin >> y;

    
    verifica(x, y);

    return 0;
}

