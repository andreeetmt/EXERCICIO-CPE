#include <iostream>
using namespace std;

int main() {
    double alcool, gasolina;

    cout << "Insira o valor do �lcool: ";
    cin >> alcool;

    cout << "Insira o valor da gasolina: ";
    cin >> gasolina;

    float quo = alcool / gasolina;

    if (quo > 0.7)
        cout << "Abaste�a com �lcool, meu consagrado :)" << endl;
    else
        cout << "Abaste�a com gasolina, meu bom :D" << endl;

    return 0;
}
