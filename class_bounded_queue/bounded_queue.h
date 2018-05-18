#ifndef _BOUNDED_QUEUE_H_
#define _BOUNDED_QUEUE_H_

#include <iostream>
using namespace std;

const int MAXQSIZE = 3;

template <typename T>
class bounded_queue{
private:
	T queueArray[MAXQSIZE];
	int qfront, qback; 
	int count;
	
public:
	bounded_queue():qfront(0), qback(0), count(0){}
	
	void push(const T &item){
		if(count == MAXQSIZE)
			throw string("Queue is full");
		queueArray[qback] = item;
		qback = (qback + 1) % MAXQSIZE;
		count++;
	}
	
	void pop(){
		if(count == 0)
			throw string("Queue is empty");
		qfront = (qfront + 1) % MAXQSIZE;
		count--;
	}
	
	T& front(){
		if(count == 0)
			throw string("Queue is empty");
		return queueArray[qfront];
	}
	
	int size() const{
		return count;
	}
	
	bool empty() const{
		return count == 0;			
	}
	
	bool full() const{
		return count == MAXQSIZE;
	}
	
};

#endif