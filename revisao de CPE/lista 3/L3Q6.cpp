#include <iostream>
using namespace std;

int main (){
	
	int l1,l2, l3;
	
	cout << "insira seus valores do trinagulo " << endl;
	cin >> l1;
	cin >> l2 ;
	cin >> l3;
	
	if (l1==l2&& l2==l3 && l3 == l1 ){
	cout << "seu triangulo � equilatero" << endl;}
	
	
	
	
	
	else if (l1 == l2 && l2!=l3&& l1 != l3) 
	 
	   cout << "seu triangulo � isosceles" << endl;
	   
	   else {
	   
	   cout << "seu triagulo � escaleno " << endl;}
	   
	   
	   return 0;
	   
}
