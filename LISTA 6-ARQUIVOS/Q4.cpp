#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void cadastrarAluno() {
    string nome, matricula;
    cout << "Digite o nome do aluno para ser listado: ";
    cin.ignore(); /
    getline(cin, nome);
    cout << "Digite a matrícula do  aluno para ser listado: ";
    getline(cin, matricula);

    ofstream arquivo(nome + ".txt");
    if (arquivo.is_open()) {
        arquivo << matricula << endl;
        arquivo.close();
        cout << "Aluno cadastrado com sucesso!" << endl;
    } else {
        cerr << "Erro ao criar o arquivo do aluno." << endl;
    }
}

void adicionarNota() {
    string nome;
    float nota;
    cout << "Digite o nome do aluno: ";
    cin.ignore(); 
    getline(cin, nome);
    ifstream arquivo(nome + ".txt");

    if (!arquivo.is_open()) {
        cerr << "Aluno não cadastrado." << endl;
        return;
    }
    arquivo.close();

    cout << "Digite a nota do aluno: ";
    cin >> nota;

    ofstream arquivoSaida(nome + ".txt", ios::app);
    if (arquivoSaida.is_open()) {
        arquivoSaida << nota << endl;
        arquivoSaida.close();
        cout << "Nota adicionada com sucesso!" << endl;
    } else {
        cerr << "Erro ao abrir o arquivo do aluno." << endl;
    }
}

void calcularMedia() {
    string nome;
    cout << "Digite o nome do aluno: ";
    cin.ignore(); 
    getline(cin, nome);
    ifstream arquivo(nome + ".txt");

    if (!arquivo.is_open()) {
        cerr << "Aluno não cadastrado." << endl;
        return;
    }

    string linha;
    getline(arquivo, linha);
    vector<float> notas;
    while (getline(arquivo, linha)) {
        float nota;
        stringstream(linha) >> nota;
        notas.push_back(nota);
    }
    arquivo.close();

    if (notas.empty()) {
        cerr << "Nenhuma nota encontrada para o aluno." << endl;
        return;
    }

    float soma = 0;
    for (float nota : notas) {
        soma += nota;
    }
    float media = soma / notas.size();
    cout << "A média do aluno " << nome << " é " << media << endl;
}

int main() {
    int opcao;
    do {
        cout << "Menu:" << endl;
        cout << "1. Cadastrar aluno" << endl;
        cout << "2. Adicionar nota de um aluno" << endl;
        cout << "3. Calcular média de um aluno" << endl;
        cout << "4. Fechar o programa" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore(); 

        switch (opcao) {
            case 1:
                cadastrarAluno();
                break;
            case 2:
                adicionarNota();
                break;
            case 3:
                calcularMedia();
                break;
            case 4:
                cout << "Fechando o programa..." << endl;
                break;
            default:
                cerr << "Opção inválida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 4);

    return 0;
}

