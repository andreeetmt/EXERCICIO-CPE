#include <iostream>
using namespace std;

int main () {
	
	int produto , vendas ;
	double total;
	
	
while (true) {
        cout << "Insira um número de produto de 1 a 5 (ou 0 para sair): ";
        cin >> produto;

        
        if (produto == 0) {
            break;
        }
	
	cout << "insira a quantidade vendida" << endl;
	cin >> vendas;
	
	switch (produto){
	
	case 1 : total = 2.98 * vendas;
	break;
	
	case 2 : total = 4.50 * vendas;
	break;
	
	case 3 : total = 9.98 *vendas ;
	break;}
	
	cout << "seu total é de : " << total << endl;
	
	return 0;
	
	
}
}
