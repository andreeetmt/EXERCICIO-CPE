#include <iostream>
using namespace std;

int main() {
   
    const int cinco = 5;
    int n[5], i, j;
    
    cout << "Insira cinco numeros de 1 a 30: ";
    for(i = 0; i < cinco; i++)
        cin >> n[i];
    
    for (i = 0; i < cinco; i++) {
        cout << "Asteriscos do numero  " << n[i] << ": ";
        for (j = 0; j < n[i]; j++) {
            cout << "*";
        }
        cout << "\n"; 
    }
    
    return 0;
} 
