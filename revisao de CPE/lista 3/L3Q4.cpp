#include <iostream>
using namespace std;

int main() {
    int numero_binario, digito, posicao = 1, valor_decimal = 0;

    cout << "Digite um n�mero bin�rio (0s e 1s): ";
    cin >> numero_binario;

    // Convertendo o n�mero bin�rio para decimal
    while (numero_binario > 0) {
        digito = numero_binario % 10; // Obt�m o �ltimo d�gito do n�mero bin�rio
        valor_decimal += digito * posicao;
        posicao *= 2; // Multiplica a posi��o por 2 para a pr�xima itera��o
        numero_binario /= 10; // Remove o �ltimo d�gito do n�mero bin�rio
    }

    cout << "O valor decimal correspondente �: " << valor_decimal << endl;

    return 0;
}
