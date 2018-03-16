#include <iostream>
#include "Array.hpp"

//typedef unsigned int size_t;

Array::Array(size_t size){
	mySize = size;
	myData = new int [mySize];
}

/*
Array::Array(size_t size){				// Конструктор.
	mySize = size;
	myData = new int [mySize];
}

Array::~Array(){						// Деструктор.
	delete [] myData;
}
*/

void Array::set(int i, int val){
	if(i < 0 || i > (mySize-1))
		return;						
	myData[i] = val;
}

int Array::get(int i){
	if(i < 0 || i > (mySize-1))
		return -1;	
 	return myData[i];
}

size_t Array::getsize(){
	return mySize;
}

Array::Array(Array &a){			// Этот конструктор копий написали мы сами.
	mySize = a.mySize;
	myData = new int [mySize];
	for(int i=0;i<mySize;i++){
		myData[i] = a.myData[i];
	}
}

Array& Array::operator=(Array &a){     
	if(this!=&a){		
		mySize = a.mySize;
		delete []  myData;
		myData = new int [mySize];

		for(int i=0;i<mySize;i++){
			myData[i] = a.myData[i];
		}
	}
	return *this; 	
}