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
    int x, y; // Declarando x e y dentro do escopo da função main()

    // Ler os números inseridos
    cout << "Insira o primeiro número: ";
    cin >> x;

    cout << "Insira o segundo número: ";
    cin >> y;

    // Verificar se é múltiplo ou não
    verifica(x, y);

    return 0;
}

