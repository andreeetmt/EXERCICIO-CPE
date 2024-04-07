#include <iostream>
using namespace std;

int main (){
	
int x , y , z;

cout<<"Insira o valor do lado 1 :" << endl;
cin >> x ;

cout << "insira o valor do lado 2 :" << endl;
cin >> y;

cout << "isira o valor do lado 3 :" << endl;
cin >> z;

if (x==y && y==z)
cout << "seu triangulo é equilatero" << endl; 

if (x==y && x != z)
cout << "seu triangulo e isosceles" << endl;

if (x!=y && y!=z)
cout << "seu triangulo é escaleno" << endl;

return 0;


}
