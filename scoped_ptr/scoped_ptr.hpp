#ifndef _SCOPED_PTR_HPP_
#define _SCOPED_PTR_HPP_
#include "Array.hpp"

class scoped_ptr{

private:
	Array *pArr;

public:
	
	scoped_ptr(Array *pArray);		
	
	~scoped_ptr();
	
	Array* ptr();	
	
	bool isNull();
	
	Array* operator->();	
	Array& operator*();

};

#endif