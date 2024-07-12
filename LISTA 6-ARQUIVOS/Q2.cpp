#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void contarCaracterePorLinha(const string& nomeArquivo, char caractereBuscado) {
    ifstream arquivo(nomeArquivo);

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo " << nomeArquivo << endl;
        return;
    }

    string linha;
    int numeroLinha = 0;

    while (getline(arquivo, linha)) {
        int contador = 0;
        for (char c : linha) {
            if (c == caractereBuscado) {
                contador++;
            }
        }
        cout << "Linha " << ++numeroLinha << ": " << contador << " vezes o caractere '" << caractereBuscado << "'" << endl;
    }

    arquivo.close();
}

int main() {
    string nomeArquivo = "mochileiro.txt"; // Nome do arquivo a ser lido
    char caractereBuscado;

    cout << "Digite o caractere que deseja buscar: ";
    cin >> caractereBuscado;

    contarCaracterePorLinha(nomeArquivo, caractereBuscado);

    return 0;
}
