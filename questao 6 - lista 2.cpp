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
    int x, y; // Declarando x e y dentro do escopo da fun��o main()

    // Ler os n�meros inseridos
    cout << "Insira o primeiro n�mero: ";
    cin >> x;

    cout << "Insira o segundo n�mero: ";
    cin >> y;

    // Verificar se � m�ltiplo ou n�o
    verifica(x, y);

    return 0;
}

