#include <iostream>
using namespace std;

int main () {
	 
	 int num;
	 int fato = 1;
	 
	 cout << "insira um numero nao negativo " << endl;
	 cin >> num;
	 
	 for (int i=1 ; i <= num; i++){
	 
	   fato *= i;
	   
	   cout << "o fatorial é " << fato << endl;}
	   
	   return 0;
	   
}
