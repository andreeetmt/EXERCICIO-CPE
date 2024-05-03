#include <iostream>
using namespace std;

int main() {
    double alcool, gasolina;

    cout << "Insira o valor do álcool: ";
    cin >> alcool;

    cout << "Insira o valor da gasolina: ";
    cin >> gasolina;

    float quo = alcool / gasolina;

    if (quo > 0.7)
        cout << "Abasteça com álcool, meu consagrado :)" << endl;
    else
        cout << "Abasteça com gasolina, meu bom :D" << endl;

    return 0;
}
