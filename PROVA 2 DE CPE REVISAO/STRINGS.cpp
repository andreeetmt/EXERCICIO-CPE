#include <iostream>
#include <string> // Inclui a biblioteca para manipulação de strings

using namespace std;

int main() {
    // Exemplo de criação e manipulação de strings
    string mensagem = "Olá, mundo!";

    // Mostra a string na tela
    cout << "Mensagem: " << mensagem << endl;

    // Acessando o tamanho da string
    cout << "Tamanho da mensagem: " << mensagem.size() << " caracteres" << endl;

    // Concatenando strings
    string nome = "João";
    string sobrenome = "Silva";
    string nomeCompleto = nome + " " + sobrenome;
    cout << "Nome completo: " << nomeCompleto << endl;

    // Acessando caracteres individuais da string
    cout << "Primeiro caractere: " << mensagem[0] << endl;
    cout << "Último caractere: " << mensagem[mensagem.size() - 1] << endl;

    // Comparando strings
    string senhaArmazenada = "senha123";
    string senhaDigitada;
    cout << "Digite a senha: ";
    cin >> senhaDigitada;

    if (senhaDigitada == senhaArmazenada) {
        cout << "Senha correta!" << endl;
    } else {
        cout << "Senha incorreta!" << endl;
    }

    return 0;
}
