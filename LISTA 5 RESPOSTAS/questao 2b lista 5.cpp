#include <iostream>
using namespace std;


bool perfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    cout << "Números perfeitos entre 1 e 1000:" << endl;
    for (int i = 2; i <= 1000; i++) {
        if (perfect(i)) {
            cout << i << " é um número perfeito. Fatores: 1";
            for (int j = 2; j < i; j++) {
                if (i % j == 0)
                    cout << " + " << j;
            }
            cout << " = " << i << endl;
        }
    }

    return 0;
}
