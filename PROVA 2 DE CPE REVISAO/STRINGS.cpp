#include <iostream>
#include <string> // Inclui a biblioteca para manipula��o de strings

using namespace std;

int main() {
    // Exemplo de cria��o e manipula��o de strings
    string mensagem = "Ol�, mundo!";

    // Mostra a string na tela
    cout << "Mensagem: " << mensagem << endl;

    // Acessando o tamanho da string
    cout << "Tamanho da mensagem: " << mensagem.size() << " caracteres" << endl;

    // Concatenando strings
    string nome = "Jo�o";
    string sobrenome = "Silva";
    string nomeCompleto = nome + " " + sobrenome;
    cout << "Nome completo: " << nomeCompleto << endl;

    // Acessando caracteres individuais da string
    cout << "Primeiro caractere: " << mensagem[0] << endl;
    cout << "�ltimo caractere: " << mensagem[mensagem.size() - 1] << endl;

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
