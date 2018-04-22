#include <iostream>
#include "point.hpp"
#include "shared_ptr.hpp"
using namespace std;


void foo(shared_p p){
	cout << "FUNC: p.number = " << p.getNumber() << endl;
	cout << "FUNC: p.counter = " << p.getCounter() << endl;
	cout << p->getX() << '\t' << p->getY() << endl;
}



int main(){
	
	
	
	shared_p p (new Point());
	
	foo(p);
	
	
	cout << "p.number = " << p.getNumber() << endl;
	cout << "p.counter = " << p.getCounter() << endl;
	cout << p->getX() << '\t' << p->getY() << endl;
	
	
		
	shared_p p2 (new Point(3,3));
	
	foo(p2);
	
	
	cout << "p2.number = " << p2.getNumber() << endl;
	cout << "p2.counter = " << p2.getCounter() << endl;
	cout << p2->getX() << '\t' << p2->getY() << endl;
	
	
	p = p2;
	
	cout << "p.number = " << p.getNumber() << endl;
	cout << "p.counter = " << p.getCounter() << endl;
	cout << p->getX() << '\t' << p->getY() << endl;
	
	cout << "p2.number = " << p2.getNumber() << endl;
	cout << "p2.counter = " << p2.getCounter() << endl;
	cout << p2->getX() << '\t' << p2->getY() << endl;
	
	
	shared_p p7;
	
	p7 = p;
	
	
	cout << "p.number = " << p.getNumber() << endl;
	cout << "p.counter = " << p.getCounter() << endl;
	cout << p->getX() << '\t' << p->getY() << endl;
	
	
/*	cout << "p.number = " << p.getNumber() << endl;
	cout << "p.counter = " << p.getCounter() << endl;
	
	cout << "p2.number = " << p2.getNumber() << endl;
	cout << "p2.counter = " << p2.getCounter() << endl;
	
	
	
	
	cout << p->getX() << '\t' << p->getY() << endl;
	
	cout << p2->getX() << '\t' << p2->getY() << endl;
	
	
	shared_p p3 = new Point(7,7);
	
	p = p3;
	p2 = p3;
	
	
	cout << "p.number = " << p.getNumber() << endl;
	cout << "p.counter = " << p.getCounter() << endl;
	
	cout << "p2.number = " << p2.getNumber() << endl;
	cout << "p2.counter = " << p2.getCounter() << endl;
	
	cout << "p3.number = " << p3.getNumber() << endl;
	cout << "p3.counter = " << p3.getCounter() << endl;
	
	
	
	
	cout << p->getX() << '\t' << p->getY() << endl;
	
	cout << p2->getX() << '\t' << p2->getY() << endl;
*/	
	

	return 0;
}