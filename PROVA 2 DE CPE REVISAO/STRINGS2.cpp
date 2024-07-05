#include <iostream>
#include <string>

using namespace std;

int main() {
    // Encontrando substring dentro de uma string
    string frase = "O rato roeu a roupa do rei de Roma";
    string palavra = "roupa";

    if (frase.find(palavra) != string::npos) {
        cout << "'" << palavra << "' encontrada na frase." << endl;
    } else {
        cout << "'" << palavra << "' não encontrada na frase." << endl;
    }

    // Substituindo parte da string
    string texto = "Eu gosto de morangos.";
    string palavraAntiga = "morangos";
    string palavraNova = "maçãs";

    texto.replace(texto.find(palavraAntiga), palavraAntiga.length(), palavraNova);
    cout << "Texto modificado: " << texto << endl;

    return 0;
}



