#include <iostream>
using namespace std;

int main() {
  
    cout << " 1:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

  
    cout << " 2:" << endl;
    for (int i = 10; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    
    cout << " 3:" << endl;
    for (int i = 10; i > 0; i--) {
        for (int j = 0; j < 10 - i; j++) {
            cout << ' ';
        }
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    cout << endl;

    
    cout <<  "4:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            cout << ' ';
        }
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
