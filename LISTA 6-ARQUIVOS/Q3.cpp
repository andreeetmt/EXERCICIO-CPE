#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

struct Pessoa {
    string codigo;
    double medida;
};

Pessoa encontrarMaiorMedida(const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo);
    Pessoa maiorPessoa;
    maiorPessoa.medida = numeric_limits<double>::min();

    if (arquivo.is_open()) {
        string codigo;
        double medida;
        while (arquivo >> codigo >> medida) {
            if (medida > maiorPessoa.medida) {
                maiorPessoa.codigo = codigo;
                maiorPessoa.medida = medida;
            }
        }
        arquivo.close();
    } else {
        cerr << "Erro ao abrir o arquivo: " << nomeArquivo << endl;
    }

    return maiorPessoa;
}

int main() {
    Pessoa maiorAltura = encontrarMaiorMedida("altura.txt");
    Pessoa maiorPeso = encontrarMaiorMedida("peso.txt");

    cout << "Pessoa com  uma altura maior :" << endl;
    cout << "Código: " << maiorAltura.codigo << ", Altura: " << maiorAltura.medida << " metros" << endl;

    cout << "Pessoa com um maior peso :" << endl;
    cout << "Código: " << maiorPeso.codigo << ", Peso: " << maiorPeso.medida << " quilogramas" << endl;

    return 0;
}
