#include <iostream>

using namespace std;

int main() {
    //constante para pi
    const float PI = 3.14159;

    //raio fornecido pelo usu�rio
    float raio;

    //forne�a o raio do c�rculo
    cout << "Digite o raio do circulo: ";
    cin >> raio;

    //di�metro, a circunfer�ncia e a �rea do c�rculo
    float diametro = 2 * raio;
    float circunferencia = 2 * PI * raio;
    float area = PI * raio * raio;

    // Imprime os resultados no terminal
    cout << "Diametro do circulo: " << diametro << endl;
    cout << "Circunferencia do circulo: " << circunferencia << endl;
    cout << "Area do circulo: " << area << endl;

    return 0;
}
