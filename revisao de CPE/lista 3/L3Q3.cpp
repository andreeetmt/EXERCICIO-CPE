#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    // Reverte o número
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    // Verifica se o número original é igual ao reverso
    return original == reversed;
}

int main() {
    int num;
    cout << "Digite um número de cinco dígitos: ";
    cin >> num;
    
    // Verifica se o número tem cinco dígitos
    if (num < 10000 || num > 99999) {
        cout << "Por favor, insira um número de cinco dígitos." << endl;
        return 1;
    }
    
    // Verifica se o número é um palíndromo
    if (isPalindrome(num)) {
        cout << "O número " << num << " é um palíndromo!" << endl;
    } else {
        cout << "O número " << num << " não é um palíndromo." << endl;
    }
    
    return 0;
}
