#include <iostream>
#include <cstring>
#include <unistd.h>
using namespace std;

const int iTam = 2;
int iQtdRegistros = 0;

struct Categoria {
    int iCodCategoria;
    string sNomeCategoria;
};

struct Setor {
    string sSetor;
};

struct Localizacao {
    int iCodLocal;
    string sNomeLocal;
};

struct CadRamal {
    int iNumRamal;
    Categoria VarCategoria;
    Setor VarSetor;
    Localizacao VarLocal;
    string sSalaRamal;
    string sRespRamal;
    string sRespAteste;
};

void CadastroDeRamais(CadRamal *pRamal, CadRamal *pVetor);
bool VerificaRamal(CadRamal *pVetor, int pRamal);
void ImprimirPesquisaNoCadastro(CadRamal *pVetor, int &pOpc);
void ImprimirCadastroDeRamais(CadRamal *pVetor);
bool VerificaAuxiliares(CadRamal *pVetor, string pAuxiliar, int &pRamal);

int main() {
    CadRamal VarCadRamal;
    CadRamal vVetor[iTam];
    CadRamal *pRamal = &VarCadRamal;

    int iOpc, iRamal;
    string sAuxiliar = "";

    do {
        system("clear");
        cout << "\n\t=======================================";
        cout << "\n\tMENU PARA CADASTRO E PESQUISA DE RAMAIS ";
        cout << "\n\t=======================================\n";
        cout << "\n\t   0 para: N�mero do Ramal.";
        cout << "\n\t   1 para: Setor.";
        cout << "\n\t   2 para: Edif�cio.";
        cout << "\n\t   3 para: Respons�vel pelo Ramal.";
        cout << "\n\t   4 para: Respons�vel pelo Ateste.";
        cout << "\n\t   5 para: Cadastro de Ramais.";
        cout << "\n\t   6 para: Imprimir o Cadastro.";
        cout << "\n\t   7 para: Finalizar o Programa.";
        cout << "\n\n\t   Informe a Op��o desejada = ";
        cin >> iOpc;

        switch(iOpc) {
            case 0:
                do {
                    system("clear");
                    cout << "\n===============\nLISTA DE RAMAIS\n===============\nRamais\n";
                    for (int i = 0; i < iTam; i++) {            
                        ImprimirPesquisaNoCadastro(&vVetor[i], iRamal);
                        if (iRamal == -1) break;
                    }   
                    if (iRamal == -1) break;
                    cout << "\n\nDigite o n�mero do ramal que deseja pesquisar = ";
                    cin >> iRamal;
                    if (!VerificaRamal(vVetor, iRamal)) {
                        cout << "\nN�mero do ramal informado n�o cadastrado!\n";
                        sleep(2);
                        continue;
                    }  
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;

            case 1:
                do {
                    system("clear");
                    cout << "\n================\nLISTA DE SETORES\n================\nSetores\n";  
                    for (int i = 0; i < iTam; i++) {            
                        ImprimirPesquisaNoCadastro(&vVetor[i], iOpc);    
                        if (iOpc == -1) break;
                    }   
                    if (iOpc == -1) break;
                    cout << "\n\nDigite o nome do Setor que deseja pesquisar = ";
                    cin >> sAuxiliar;
                    if (VerificaAuxiliares(vVetor, sAuxiliar, iRamal)) {
                        cout << "\nNome do setor informado n�o cadastrado!\n";
                        sleep(2);
                        continue;
                    }  
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;

            case 2:
                do {
                    system("clear");
                    cout << "\n==================\nLISTA DE EDIF�CIOS\n==================\nEdif�cios\n";  
                    for (int i = 0; i < iTam; i++) {            
                        ImprimirPesquisaNoCadastro(&vVetor[i], iOpc);    
                        if (iOpc == -1) break;
                    }   
                    if (iOpc == -1) break;
                    cout << "\n\nDigite o n�mero do Edif�cio que deseja pesquisar = ";
                    cin >> iRamal;
                    if (!VerificaRamal(vVetor, iRamal)) {
                        cout << "\nEdif�cio informado n�o cadastrado!\n";
                        sleep(2);
                        continue;
                    }  
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;

            case 3:
                do {
                    system("clear");
                    cout << "\n=================================\nLISTA DOS RESPONS�VEIS PELO RAMAL\n=================================\nRespons�veis\n";  
                    for (int i = 0; i < iTam; i++) {            
                        ImprimirPesquisaNoCadastro(&vVetor[i], iOpc);    
                        if (iOpc == -1) break;
                    }   
                    if (iOpc == -1) break;
                    cout << "\n\nDigite o nome do Respons�vel que deseja pesquisar = ";
                    cin >> sAuxiliar;
                    if (VerificaAuxiliares(vVetor, sAuxiliar, iRamal)) {
                        cout << "\nNome do Respons�vel informado n�o cadastrado!\n";
                        sleep(2);
                        continue;
                    }  
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;

            case 4:
                do {
                    system("clear");
                    cout << "\n==================================\nLISTA DOS RESPONS�VEIS PELO ATESTE\n==================================\nRespons�veis\n";  
                    for (int i = 0; i < iTam; i++) {            
                        ImprimirPesquisaNoCadastro(&vVetor[i], iOpc);    
                        if (iOpc == -1) break;
                    }   
                    if (iOpc == -1) break;
                    cout << "\n\nDigite o nome do Respons�vel que deseja pesquisar = ";
                    cin >> sAuxiliar;
                    if (VerificaAuxiliares(vVetor, sAuxiliar, iRamal)) {
                        cout << "\nNome do Respons�vel informado n�o cadastrado!\n";
                        sleep(2);
                        continue;
                    }  
                    ImprimirCadastroDeRamais(&vVetor[iRamal]);
                    break;
                } while (true);
                break;

            case 5:   
                if (iQtdRegistros == iTam) {
                    cout << "\n=======================================================\nSr Usu�rio, n�o h� espa�o livre para novos Cadastros!..\n=======================================================\n";
                    sleep(4);
                    break;
                }
                CadastroDeRamais(pRamal, vVetor);
                vVetor[iQtdRegistros] = VarCadRamal;
                iQtdRegistros += 1;
                break;

            case 6:     
                system("clear");
                cout << "\n=============================================================\nLISTAGEM DO CADASTRO DE RAMAIS DO MINIST�RIO DO MEIO AMBIENTE\n=============================================================\n";
                if (iQtdRegistros == 0) {
                    cout << "\n=======================================================\nSr Usu�rio, n�o h� Registros Cadastros at� o momento!..\n=======================================================\n";
                    sleep(4);
                    break;
                }
                for (int i = 0; i < iTam; i++) {   
                    ImprimirCadastroDeRamais(&vVetor[i]);
                }
                break;

            case 7:
                return 0;

            default:
                cout << "\n\tOp��o informada inv�lida!!\n";
                sleep(1);
        }
    } while(iOpc != 7);
}

void CadastroDeRamais(CadRamal *pRamal, CadRamal *pVetor) {
    system("clear");
    cout << "\n=================================================\nCADASTRO DE RAMAIS DO MINIST�RIO DO MEIO AMBIENTE\n=================================================\n";

    int iAux = 0;

    do {
        cout << "\nInforme o n�mero do Ramal entre 1000 e 3000 = ";
        cin >> iAux;
     
        if (VerificaRamal(pVetor, iAux)) {
            cout << "\nN�mero do Ramal j� est� cadastrado\n";
            sleep(1);
            iAux = -1;
        }
        if (iAux != -1) {
            pRamal->iNumRamal = iAux;
        }
    } while(iAux == -1);

    cout << "\nInforme o c�digo da categoria = ";
    cin >> pRamal->VarCategoria.iCodCategoria;
    cout << "Informe o nome da categoria = ";
    cin >> pRamal->VarCategoria.sNomeCategoria;
    cout << "Informe o nome do setor = ";
    cin >> pRamal->VarSetor.sSetor;
    cout << "Informe o c�digo do local = ";
    cin >> pRamal->VarLocal.iCodLocal;
    cout << "Informe o nome do local = ";
    cin >> pRamal->VarLocal.sNomeLocal;
    cout << "Informe a sala do ramal = ";
    cin >> pRamal->sSalaRamal;
    cout << "Informe o respons�vel pelo ramal = ";
    cin >> pRamal->sRespRamal;
    cout << "Informe o respons�vel pelo ateste = ";
    cin >> pRamal->sRespAteste;
}

bool VerificaRamal(CadRamal *pVetor, int pRamal) {
    for (int i = 0; i < iQtdRegistros; i++) {
        if (pVetor[i].iNumRamal == pRamal) {
            return false;
        }
    }
    return true;
}

void ImprimirPesquisaNoCadastro(CadRamal *pVetor, int &pOpc) {
    switch (pOpc) {
        case 0:
            cout << pVetor->iNumRamal << endl;
            break;
        case 1:
            cout << pVetor->VarSetor.sSetor << endl;
            break;
        case 2:
            cout << pVetor->VarLocal.iCodLocal << endl;
            break;
        case 3:
            cout << pVetor->sRespRamal << endl;
            break;
        case 4:
            cout << pVetor->sRespAteste << endl;
            break;
        default:
            break;
    }
}

void ImprimirCadastroDeRamais(CadRamal *pVetor) {
    cout << "\nN�mero do Ramal: " << pVetor->iNumRamal << endl;
    cout << "Categoria: " << pVetor->VarCategoria.sNomeCategoria << " (C�digo: " << pVetor->VarCategoria.iCodCategoria << ")" << endl;
    cout << "Setor: " << pVetor->VarSetor.sSetor << endl;
    cout << "Local: " << pVetor->VarLocal.sNomeLocal << " (C�digo: " << pVetor->VarLocal.iCodLocal << ")" << endl;
    cout << "Sala: " << pVetor->sSalaRamal << endl;
    cout << "Respons�vel pelo Ramal: " << pVetor->sRespRamal << endl;
    cout << "Respons�vel pelo Ateste: " << pVetor->sRespAteste << endl;
}

bool VerificaAuxiliares(CadRamal *pVetor, string pAuxiliar, int &pRamal) {
    for (int i = 0; i < iQtdRegistros; i++) {
        if (pVetor[i].VarSetor.sSetor == pAuxiliar || pVetor[i].sRespRamal == pAuxiliar || pVetor[i].sRespAteste == pAuxiliar) {
            pRamal = i;
            return false;
        }
    }
    return true;
}
