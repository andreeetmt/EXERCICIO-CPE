#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	
double x , y , resposta ;
char expressao;

cout << " digite seu primeiro valor :" << endl;
cin >> x;

cout << " digite o segundo valor : " << endl;
cin >> y;

cout << " digite o sinal (- , + , * ou /):" << endl;
cin >> expressao;



switch (expressao) {


case '-' :
 resposta =	x - y ;
 break;
	
case '+' :
 resposta =	x + y;
 break;
	
case '*' :
 resposta =	x * y ;
 break;

case '/' :
 resposta =	x / y ;
 
 break;
}

cout << fixed << setprecision (2);
 
 cout << " sua reposta é :" << resposta << endl;
 

return 0;

}



