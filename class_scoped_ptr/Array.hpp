#ifndef ARRAY_HPP_
#define ARRAY_HPP_
//#include "scoped_ptr.hpp"

class Array{
	
	typedef unsigned long size_t;

	private:
		size_t mySize;
		int *myData;
		

	public:

		Array(size_t size);
//		Array(size_t size); 	// Конструктор.
//		~ Array();				// Деструктор.

		void set(int i, int val);
		int get (int i);
		size_t getsize();

		Array(Array &a);  

		Array& operator=(Array &a); 

};

# endif
