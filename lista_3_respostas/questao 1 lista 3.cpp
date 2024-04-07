#include <iostream>
using namespace std;

int main ()
{
   double a , g;
   
   //solicitar para inserir valores
   
   cout<< "Insira o preço da gasolina :" << endl;
   cin >> g;
   
   cout << "insira o preço do alcool :" << endl;
   cin >> a;
      
  double med = a / g ;
  
  if (med <= 0.7)
  cout << "Abasteça o tanque com alcool" << endl ; 
  
  else 
  	cout << "Abasteça tanque com gasolina" << endl;
  
  
  return 0;
}
