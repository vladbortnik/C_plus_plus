// CALCULATOR

#include <iostream>
using namespace std; 


int main() { 
	
	double a, b;
	int i=0;
	char w;
	
	cout << "\n\t *** CALCULATOR *** \n\n";
	
	do {
	
		cout << "Enter two numbers and operator in the following format a + b: ";
		cin >> a >> w >> b;
		cout << "\n";
	
		i++;
		switch(w){
			case '+': cout << a << " + " << b << " = " << a+b << "\n\n"; break;
			case '-': cout << a << " - " << b << " = " << a-b << "\n\n"; break;
			case '*': cout << a << " * " << b << " = " << a*b << "\n\n"; break;
			case '/': cout << a << " / " << b << " = " << a/b << "\n\n"; break;
			//case '%': cout << a << " % " << b << " = " << a%b << "\n\n"; break;
			default: cout << "What is that, man??... \n\n"; break;
			}
	
	} while (i<100);
	
return 0; 
}