#include <iostream>
#include "Array.hpp"
using namespace std;


int main(){
	
	Array a(30);
	
	for(int i=0;i<a.getsize();i++){
		a.set(i, i+1);
	}
	
	Array b(10);
	
	b = a;
	
	for(int i=0;i<b.getsize();i++){
		cout << b.get(i) << " ";
	}
	cout << endl;

	return 0;
}