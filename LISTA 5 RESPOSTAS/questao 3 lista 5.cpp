#include <iostream>
#include <vector>
using namespace std;

bool perfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

void imprimirFatores(int num) {
    vector<int> fatores;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            fatores.push_back(i);
        }
    }
    cout << "Fatores de " << num << ": ";
    for (int fator : fatores) {
        cout << fator << " ";
    }
    cout << endl;
}

int main() {
    cout << "Números perfeitos entre 1 e 1000:" << endl;
    for (int i = 1; i <= 1000; ++i) {
        if (perfect(i)) {
            cout << i << " é um número perfeito." << endl;
            imprimirFatores(i);
        }
    }

    return 0;
}
