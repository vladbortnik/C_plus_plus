#include "point.hpp"

Point::Point(){
	x = -1;
	y = -1;
}

Point::Point(int a, int b){
	x = a;
	y = b;
}

void Point::set(int a, int b){
	x = a;
	y = b;
}

int Point::getX(){
	return x;
}

int Point::getY(){
	return y;
}