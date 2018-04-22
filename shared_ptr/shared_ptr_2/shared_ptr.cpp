#include "shared_ptr.hpp"
/*
shared_p::shared_p(){
	space = new Storage();
	space->myPoint = 0;
	space->myCounter = 0;
}
*/

shared_p::shared_p(Point *p){			
	space = new Storage();
	space->myPoint = p;
	space->myCounter = 1;
}

shared_p::shared_p(shared_p &p){
	space = p.space;
	p.space->myCounter++;
}

shared_p::~shared_p(){					
	space->myCounter--;
	if(space->myCounter == 0 && space->myPoint != 0){
		delete space->myPoint;
		delete space;
	}
}

shared_p& shared_p::operator=(shared_p &p){
	if(this != &p){
		space->myCounter--;
		if(space->myCounter == 0 && space->myPoint != 0){
			delete space->myPoint;
			delete space;
			space = p.space;
			space->myCounter++; 
		}
		else{ 
			space = p.space;
			space->myCounter++;
		}		
	}
	return *this;	
}


Point& shared_p::operator*(){
	return *(space->myPoint);

}

Point* shared_p::operator->(){			
	return space->myPoint;
}


int shared_p::getCounter(){
	return space->myCounter;
}

Storage* shared_p::getStorage(){
	return space;
}












