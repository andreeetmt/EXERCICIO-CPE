#include <iostream>
using namespace std;

int main() {

    int produto, vendas ;
    float conta;
    

    cout << "Insira o numero do seu produto de 1 a 5: " << endl;
    cin >> produto;

    switch (produto) {
    case 1:
        conta = 2.98;
        break;

    case 2:
        conta = 4.50;
        break;

    case 3:
        conta = 9.98;
        break;

    case 4:
        conta = 4.49;
        break;

    case 5:
        conta = 6.87;
        break;

    
    }

    cout << "Insira o numero de vendas: " << endl;
    cin >> vendas;

    conta = conta * vendas;

    cout << "O seu valor total e: " << conta << endl;

    return 0;
}
