#include <iostream>
using namespace std;

double farh(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    cout << "Tabela de conversão de Celsius para Fahrenheit:" << endl;
    cout << "Celsius\tFahrenheit" << endl;
    cout << "====================" << endl;

    for (int celsius = 0; celsius <= 100; celsius++) {
        double far = farh(celsius);
        cout << celsius << "\t" << far << endl;
    }

    return 0;
}
