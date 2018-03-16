#include <iostream>
#include "Array.hpp"
#include "scoped_ptr.hpp"
using namespace std;

void f(scoped_ptr p){
	
}

int main(){
	
	
	scoped_ptr p = new Array(20);

	
	
	
//	Array *p = p1.ptr();
	
	for(int i=0;i<p->getsize();i++){
		p->set(i, i+2*i);
	}
	
	for(int i=0;i<p->getsize();i++){
		cout << p->get(i) << ' ';
	} cout << endl;
	
	cout << *(p) << endl;


	return 0;
}