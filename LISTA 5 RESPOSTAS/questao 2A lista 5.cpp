#include <iostream>
using namespace std;


bool primo(int n1) {
    if (n1 <= 1) 
        return false;
    for (int i = 2; i * i <= n1; i++) {
        if (n1 % i == 0)
            return false;
    }
    return true; 
}

     
     
     
     
     int main() {
    cout << "Números primos entre 2 e 1000:" << endl;
    for (int i = 2; i <= 1000; i++) {
        if (primo(i))
            cout << i << " ";
    }
    cout << endl;

    return 0;
}
