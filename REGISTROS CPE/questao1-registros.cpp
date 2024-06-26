
#include <iostream>
#include <string>
using namespace std;

struct Ramal { 
    int ramal;
    int categoria;
    string setor;
    int edificio;
    int sala;
    string resramal;
    string resteste;
};

int main() { 
    Ramal ramal1;

    ramal1.ramal = 1000;
    ramal1.categoria = 6;
    ramal1.setor = "setel";
    ramal1.edificio = 500;
    ramal1.sala = 567;
    ramal1.resramal = "marcos";
    ramal1.resteste = "aline";

    cout << "ramal = " << ramal1.ramal << endl;
    cout << "categoria = " << ramal1.categoria << endl;
    cout << "setor = " << ramal1.setor << endl;
    cout << "edificio = " << ramal1.edificio << endl;
    cout << "sala = " << ramal1.sala << endl;
    cout << "responsavel pelo ramal = " << ramal1.resramal << endl; 
    cout << "responsavel pelo ateste = " << ramal1.resteste << endl;

    return 0;
}
