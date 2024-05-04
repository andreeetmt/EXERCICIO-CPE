#include <iostream>
using namespace std;

int main() {
   
    double distancia, Total, Medio;

   
    cout << "Digite a distância percorrida em quilômetros: ";
    cin >> distancia;

    
    if (distancia <= 50) {
        Total = distancia * 1.75;
    } else if (distancia <= 100) {
        Total = 50 * 1.75 + (distancia - 50) * 1.65;
    } else {
        Total = 50 * 1.75 + 50 * 1.65 + (distancia - 100) * 1.50;
    }

    
 Medio = Total / distancia;

   
    cout << "O total é: " << Total << " reais." << endl;
    cout << "O custo médio por km é: " << Medio << " reais/km." << endl;

    return 0;
}
