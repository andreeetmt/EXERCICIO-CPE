#include <iostream>
using namespace std;

void verifica(int x, int y) {
    if (x % y == 0) {
        cout << x << " é múltiplo de " << y << endl;
    } else {
        cout << x << " não é múltiplo de " << y << endl;
    }
}

int main() {
    int x, y; 

    
    cout << "Insira o primeiro número: ";
    cin >> x;

    cout << "Insira o segundo número: ";
    cin >> y;

    
    verifica(x, y);

    return 0;
}

