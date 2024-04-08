#include <iostream>
using namespace std;

int main () {
	
	//variaveis
   int num, a1, a2, a3 ,a4 ,a5;
   
 cout << "insira um numero  de cinco digitos de sua preferencia : " << endl;
 cin >> num;
 
 //separar os algarismos
 
 a1 = (num  / 10000) ;

 a2 = ( num % 10000) / 1000;
 
 a3 = (num % 10000)/ 1000;
 
 a4 = (num % 100) / 10;
 
 a5 = (num % 10);
 
 if (a1==a5 && a2==a4)
 cout << "seu numero é um palindromo " << endl;
 
 else 
 cout << "seu numero nao e um palindromo " << endl;
 
 return 0;
 
}

