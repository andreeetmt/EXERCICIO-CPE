#include <iostream>
#include <string>
using namespace std;

// Defini��o de uma struct para representar um aluno
struct Aluno {
    string nome;
    int idade;
    float nota;
};

int main() {
    // Exemplo de uso da struct Aluno
    Aluno aluno1; // Declara��o de uma vari�vel do tipo Aluno
Aluno aluno2;
    // Preenchendo os dados do aluno
    aluno1.nome = "Jo�o";
    aluno1.idade = 20;
    aluno1.nota = 8.5;
    
    aluno2.nome = "Z� Piriquito";
    aluno2.idade = 69;
    aluno2.nota =10;

    // Mostrando os dados do aluno na tela
    cout << "Dados do aluno:" << endl;
    cout << "Dados do aluno:" << endl;
    cout << "Idade: " << aluno1.idade << endl;
    cout << "Nota: " << aluno1.nota << endl;
    
    
    cout<< "========================================================="<<endl;
    cout << "Dados do aluno:" << endl;
    cout << "Idade: " << aluno2.idade << endl;
    cout << "Nota: " << aluno2.nota << endl;


    return 0;
}
