#include <iostream>
using namespace std;

int main ()
{
   double a , g;
   
   //solicitar para inserir valores
   
   cout<< "Insira o pre�o da gasolina :" << endl;
   cin >> g;
   
   cout << "insira o pre�o do alcool :" << endl;
   cin >> a;
      
  double med = a / g ;
  
  if (med <= 0.7)
  cout << "Abaste�a o tanque com alcool" << endl ; 
  
  else 
  	cout << "Abaste�a tanque com gasolina" << endl;
  
  
  return 0;
}
