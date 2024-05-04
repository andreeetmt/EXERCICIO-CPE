#include <iostream>
using namespace std;

int main () {
	
	 float distancia , total , media;
	 
	 cout << "insira a distancia percorrida em km" << endl;
	 cin >> distancia;
	 
	 if (distancia <= 50)
	 
	   total = distancia * 1.75; ;
	   
 if (distancia <= 100) 
	   	  total = 50 * 1.75 + (distancia - 50) * 1.65;
	   
	   	  
	   	else{
		   
	   	 	total = 50 * 1.75 + 50 * 1.65 +(distancia - 100) * 1.50;}
	   	 	
	   	media= total / distancia;
	   	
	   	cout << "o valor total a se pagar é :\n" << total<< endl;
	   	cout << "o valor medio a se pagar é : \n" << media << endl;
	   	
	   	return 0;
	   	
	   }
	   	
	   
	
	 
	  
	  
	  
	  
	  
