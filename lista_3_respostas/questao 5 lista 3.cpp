#include <iostream>
using namespace std;

int main (){
	
 char carac;
 
 cout<< "Escolha um caractere : " << endl;
 cin >> carac;
 
 switch (carac) {
 	
 	
 	case 'a' :
 	case 'e' :
 	case 'i' :
 	case 'o' :
 	case 'u' :
 	
 	cout << carac << "  e uma vogal" << endl;
 	break;
 	
 	default :
 		cout << carac << "   nao é uma vogal" << endl ;
 		
 		return 0;
 		
 	}
 	
 }
 	
 	

 

