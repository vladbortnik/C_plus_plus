#ifndef _SHARED_PTR_HPP_
#define _SHARED_PTR_HPP_
#include "point.hpp"


struct Storage{
	Point *myPoint;
	int myCounter;
};


class shared_p{

private:
	Storage *space;

	
	
public:
	
//	shared_p();
	shared_p(Point *p);
	shared_p(shared_p &p);
	~shared_p();
		
	shared_p& operator=(shared_p &p);

	Point& operator*();
	Point* operator->();
	
	int getCounter();
	
	Storage* getStorage();
};

#endif