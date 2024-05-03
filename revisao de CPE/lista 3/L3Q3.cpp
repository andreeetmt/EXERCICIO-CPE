#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    
    // Reverte o n�mero
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    // Verifica se o n�mero original � igual ao reverso
    return original == reversed;
}

int main() {
    int num;
    cout << "Digite um n�mero de cinco d�gitos: ";
    cin >> num;
    
    // Verifica se o n�mero tem cinco d�gitos
    if (num < 10000 || num > 99999) {
        cout << "Por favor, insira um n�mero de cinco d�gitos." << endl;
        return 1;
    }
    
    // Verifica se o n�mero � um pal�ndromo
    if (isPalindrome(num)) {
        cout << "O n�mero " << num << " � um pal�ndromo!" << endl;
    } else {
        cout << "O n�mero " << num << " n�o � um pal�ndromo." << endl;
    }
    
    return 0;
}
