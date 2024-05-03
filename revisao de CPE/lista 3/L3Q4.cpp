#include <iostream>
using namespace std;

int main() {
    int numero_binario, digito, posicao = 1, valor_decimal = 0;

    cout << "Digite um número binário (0s e 1s): ";
    cin >> numero_binario;

    // Convertendo o número binário para decimal
    while (numero_binario > 0) {
        digito = numero_binario % 10; // Obtém o último dígito do número binário
        valor_decimal += digito * posicao;
        posicao *= 2; // Multiplica a posição por 2 para a próxima iteração
        numero_binario /= 10; // Remove o último dígito do número binário
    }

    cout << "O valor decimal correspondente é: " << valor_decimal << endl;

    return 0;
}
