#include <iostream>
using namespace std;


double Fatorial(int n) {
    double resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    double fCalculado = 1; /
    double fFatorial;
    
    
    for (int i = 1; i <= 10; i++) {
        fFatorial = 1 / Fatorial(i); /
        fCalculado += fFatorial; 
    }
    
    
    cout << "O valor da constante 'e' é: " << fCalculado << endl;

    return 0;
}
