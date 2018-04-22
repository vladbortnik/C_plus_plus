#include "shared_ptr.hpp"

int k = 0;
static Storage space[100];


shared_p::shared_p(){
	k++;
	space[k].myPoint = 0;
	space[k].counter = 0;
	number = k;
}


shared_p::shared_p(Point *p){			
	k++;
	space[k].myPoint = p;
	space[k].counter = 1;
	number = k;
}

shared_p::shared_p(shared_p &p){
	number = p.number;
	space[number].counter++;
}

shared_p::~shared_p(){					
	space[number].counter--;
	if(space[number].counter == 0){
		delete space[number].myPoint;
		space[number].myPoint = 0;
		space[number].counter = 0;
	}
}

Point* shared_p::operator->(){			
	return space[number].myPoint;
}

Point& shared_p::operator*(){
	return *space[number].myPoint;
}

shared_p& shared_p::operator=(shared_p &p){
	if(this != &p){
		space[number].counter--;
		if(space[number].counter == 0){
			delete space[number].myPoint;
			space[number].myPoint = 0;
			space[number].counter = 0;
		}
		number = p.number;
		space[number].counter++;
	}
	return *this;	
}



Point* shared_p::getPointer(){
	return space[number].myPoint;
}


int shared_p::getCounter(){
	return space[number].counter;
}

int shared_p::getNumber(){
	return number;
}

Storage& shared_p::getSpace(){
	return space[number];
}

















