#include "scoped_ptr.hpp"

scoped_ptr::scoped_ptr(Array *pArray){
	pArr = pArray;
}

scoped_ptr::~scoped_ptr(){
	delete [] pArr;
}

Array* scoped_ptr::ptr(){
	return pArr;
}

bool scoped_ptr::isNull(){
	return (pArr == 0);
}

Array* scoped_ptr::operator->(){
	return pArr;
}

Array& scoped_ptr::operator*(){
	return *pArr;
}