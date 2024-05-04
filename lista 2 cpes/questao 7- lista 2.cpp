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
    cout << "Digite um n�mero : ";
    cin >> x;

    if (Primo(x)) {
        cout << x
		 << " �  primo." << endl;
    } else {
        cout << x << " n�o � um n�mero primo." << endl;
    }

    return 0;
}
