#ifndef _SHARED_PTR_HPP_
#define _SHARED_PTR_HPP_
#include "point.hpp"

extern int k;

struct Storage{
	Point *myPoint;
	int counter;
};


class shared_p{

private:
	int number;
	
	
public:
	
	shared_p();
	shared_p(Point *p);
	shared_p(shared_p &p);
	~shared_p();
	
	Point* operator->();
	
	shared_p& operator=(shared_p &p);
	
	Point& operator*();
	
	Point* getPointer();
	
	int getCounter();
	
	int getNumber();
	
	Storage& getSpace();

};

#endif