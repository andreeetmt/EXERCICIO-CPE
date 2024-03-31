#include <iostream>
using namespace std;

bool Primo(int x) {
    if (x <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false; //
        }
    }
    return true; 
}

int main() {
    int x;
    cout << "Digite um número : ";
    cin >> x;

    if (Primo(x)) {
        cout << x
		 << " é  primo." << endl;
    } else {
        cout << x << " não é um número primo." << endl;
    }

    return 0;
}
