#include <iostream>
using namespace std;

int main() {
	
	cout << "triplos de pitagoras" << endl;
	
	 for(int ladoa=1 ; ladoa <=20 ; ladoa++){	 
	   for (int ladob = 1 ; ladob <= 20; ladob++){
	     for (int ladoc= 1 ; ladoc <=20 ; ladoc++){
		  
	      
	    if (ladoc * ladoc == ladoa*ladoa + ladob * ladob){
		
	    
	    cout << ladoa << " e " << ladob << " e " <<ladoc <<endl;
	}
}
}
}
	return 0;
	
}
