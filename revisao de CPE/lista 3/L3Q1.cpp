#include <iostream>
using namespace std;

int main () {
	
	float alcool, gasolina;
	
	cout << "insira o valor do alcool << "<< endl;
	cin >> alcool;
	
	cout << "insira o valor da gasolina" << endl;
	cin >> gasolina;
	
	float quo ;
	
	quo= alcool / gasolina;
	
	if(quo > 0.7)
	cout <<"abasteça com alcool meu consagrado :)" << endl;
	
	else 
	  cout << "abasteça com gasolina meu bom :D" << endl;
	  
	  
	return 0;
	
}
	
	
	
	



