#ifndef _PRIORITY_QUEUE_H_
#define _PRIORITY_QUEUE_H_

#include <queue>
using namespace std;

const int MAXPRIORITY = 10;

template <typename T>
class pr_queue {
	
private:
	int pqSize;
	queue<T> priority[MAXPRIORITY + 1];
	
public:
	pr_queue(){
		pqSize = 0;
	}
	
	void push(const T &item, int p){
		if(p < 0 || p > MAXPRIORITY)
			throw string("Range Error");
		priority[p].push(item);
		pqSize++;
	}
	
	void pop(){
		if(pqSize == 0)
			throw string("Queue is empty");
		for(int i = MAXPRIORITY; i >= 0; i--){
			if(!priority[i].empty()){
				priority[i].pop();
				pqSize--;
				return;
			}
		}
	}
	
	T& top(){
		if(pqSize == 0)
			throw string("Queue is empty");
		for(int i = MAXPRIORITY; i >= 0; i--){
			if(!priority[i].empty()){
				return priority[i].front();
			}
		}
	}
	
	const T& top() const{
		if(pqSize == 0)
			throw string("Queue is empty");
		for(int i = MAXPRIORITY; i >= 0; i--){
			if(!priority[i].empty()){
				return priority[i].front();
			}
		}
	}
	
	bool empty() const {
		if(pqSize == 0)
			return true;
		else
			return false;
	}
	
	int size() const{
		return pqSize;
	}
	
};

#endif