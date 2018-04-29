#include <iostream>
#include "point.hpp"
#include "shared_ptr.hpp"
using namespace std;


void foo(shared_p<Point> p){
	cout << "FUNC: p.myCounter = " << p.getCounter() << endl;
	cout << p->getX() << '\t' << p->getY() << endl;
	cout << (*p).getX() << '\t' << (*p).getY() << endl;
	cout << "END FUNC>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
}



int main(){
	
	system("clear");
	
	shared_p<Point> p (new Point(3,4));
	shared_p<Point> p2 (new Point(6,7));

//	Storage *s = p2.getStorage();
	
//	cout << "s->myPoint->getX() = " << s->myPoint->getX() << '\t' << s->myPoint->getY() << endl;
//	cout << "s->myCounter = " << s->myCounter << endl;
	
	cout << "p.myCounter = " << p.getCounter() << endl;
	cout << p->getX() << '\t' << p->getY() << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
	
	shared_p<Point>::Storage *s = p2.getStorage();
	p2 = p;
	foo(p);
	
	cout << "AFTER FUNC\n";
	cout << "p.myCounter = " << p.getCounter() << endl;
	cout << p->getX() << '\t' << p->getY() << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";

	
	
	cout << "s->myCounter = " << s->myCounter << endl;
	cout << "X and Y = " << s->myPoint->getX() << '\t' << s->myPoint->getY() << endl;


	cout << "p.myCounter = " << p.getCounter() << endl;
	cout << "p2.myCounter = " << p2.getCounter() << endl;
	cout << p2->getX() << '\t' << p2->getY() << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
	
	cout << "p.myCounter = " << p.getCounter() << endl;
	cout << p->getX() << '\t' << p->getY() << endl;
	cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
	
	
	

	return 0;
}