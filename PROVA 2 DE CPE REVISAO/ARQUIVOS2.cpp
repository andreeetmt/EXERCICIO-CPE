#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Abrir arquivo para escrita
    ofstream arquivo_saida("numeros.txt");

    if (!arquivo_saida.is_open()) {
        cout << "Erro ao abrir o arquivo para escrita.\n";
        return 1;
    }

    // Escrever números no arquivo
    arquivo_saida << "10\n";
    arquivo_saida << "20\n";
    arquivo_saida << "30\n";

    // Fechar o arquivo de saída
    arquivo_saida.close();

    // Abrir arquivo para leitura
    ifstream arquivo_entrada("numeros.txt");

    if (!arquivo_entrada.is_open()) {
        cout << "Erro ao abrir o arquivo para leitura.\n";
        return 1;
    }

    // Ler e exibir números do arquivo
    int numero;
    cout << "Números lidos do arquivo:\n";
    while (arquivo_entrada >> numero) {
        cout << numero << endl;
    }

    // Fechar o arquivo de entrada
    arquivo_entrada.close();

    return 0;
}
