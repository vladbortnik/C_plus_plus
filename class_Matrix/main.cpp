#include <iostream>
#include <iomanip>
#include "matrix.h"
using namespace std;


int main(){
		
	Matrix *p = new Matrix(3, 4);
	
	srand(time(0));
	for(int i=0;i<p->getsizeN();i++){
		for(int j=0;j<p->getsizeM();j++){
			p->set(i,j,(rand()%100));
		}
	}
	
	for(int i=0;i<p->getsizeN();i++){
		for(int j=0;j<p->getsizeM();j++){
			cout << setw(2) << p->get(i,j) << " ";
		}
		cout << endl;
	}
	cout << endl;




/*	Matrix a(3,5);
		
	srand(time(0));
	for(int i=0;i<a.getsizeN();i++){
		for(int j=0;j<a.getsizeM();j++){
			a.set(i,j,(rand()%100));
		}
	}
	
	a = a;
	
	for(int i=0;i<a.getsizeN();i++){
		for(int j=0;j<a.getsizeM();j++){
			cout << setw(2) << a.get(i,j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	Matrix b(1,1);
	
	b.operator= (a);					// the same: b = a;
	
	for(int i=0;i<b.getsizeN();i++){
		for(int j=0;j<b.getsizeM();j++){
			cout << setw(2) << b.get(i,j) << " ";
		}
		cout << endl;
	}
	
	cout << endl;
		
	cout << (b=a).get(1,1) << endl;
	
	Matrix &c = b;
	
	cout << c.get(2,2) << endl;
	
	cout << &c << endl;
*/	
	return 0;
}