#include <iostream>
using namespace std;

int main () {
	
   int n1, n2;
   
    cout << "insira 2 numeros " << endl;
	cin >> n1;
	cin >> n2;
	
	if (n1 % n2 == 0)
	  cout << "seu numero é um multiplo " << endl;
	  
	  else 
	   cout << "seu numero nao é multiplo" << endl;
	   
	return 0;
	
}

