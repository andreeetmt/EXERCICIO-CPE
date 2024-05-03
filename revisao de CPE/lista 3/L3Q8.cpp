#include <iostream>
using namespace std;


int main () {
	 
	 float n1 , n2 , resposta;
	 char simb;
	 
	 cout << "insira dois numeros para seu calculo :D" << endl;
	 cin >> n1 ;
	 cin >> n2 ;
	 
	  cout <<" insira um simbolo" << endl;
 cin >> simb;
	 
	 
 switch(simb) { 
 
 
 	case '+'  :resposta = n1 + n2;
 	break;
 	case '-' :resposta = n1- n2;
 		break;
 	case '*':resposta=n1 * n2;
 		break;
 	case '%': resposta =n1/n2;
 		break;
 	
}

cout << resposta << endl;



 
 return 0;
 
}
