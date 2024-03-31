#include <iostream>
using namespace std;

int main() {
    // vari�veis
    double distancia, Total, Medio;

    // Solicitando a dist�ncia percorrida ao usu�rio
    cout << "Digite a dist�ncia percorrida em quil�metros: ";
    cin >> distancia;

    // Calculando o custo total
    if (distancia <= 50) {
        Total = distancia * 1.75;
    } else if (distancia <= 100) {
        Total = 50 * 1.75 + (distancia - 50) * 1.65;
    } else {
        Total = 50 * 1.75 + 50 * 1.65 + (distancia - 100) * 1.50;
    }

    // Calculando o custo m�dio por quil�metro
 Medio = Total / distancia;

    // Exibindo o resultado
    cout << "O total �: " << Total << " reais." << endl;
    cout << "O custo m�dio por km �: " << Medio << " reais/km." << endl;

    return 0;
}
