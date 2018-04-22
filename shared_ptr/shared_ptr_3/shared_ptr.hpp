#ifndef _SHARED_PTR_HPP_
#define _SHARED_PTR_HPP_


template <typename T>
class shared_p{

public:
	struct Storage{
		T *myPoint;
		int myCounter;
	};

private:
	Storage *pStorage;
	
public:
	
//	shared_p();
	shared_p(T *p){			
		pStorage = new Storage();
		pStorage->myPoint = p;
		pStorage->myCounter = 1;
	}


	shared_p(shared_p &p){
		pStorage = p.pStorage;
		p.pStorage->myCounter++;
	}

	~shared_p(){					
		pStorage->myCounter--;
		if(pStorage->myCounter == 0 && pStorage->myPoint != 0){
			delete pStorage->myPoint;
			delete pStorage;
		}
	}
		
	shared_p& operator=(shared_p &p){
		if(this != &p){
			pStorage->myCounter--;
			if(pStorage->myCounter == 0 && pStorage->myPoint != 0){
				delete pStorage->myPoint;
				delete pStorage;
				pStorage = p.pStorage;
				pStorage->myCounter++; 
			}
			else{ 
				pStorage = p.pStorage;
				pStorage->myCounter++;
			}		
		}
		return *this;	
	}

	T& operator*(){
		return *(pStorage->myPoint);

	}

	T* operator->(){			
		return pStorage->myPoint;
	}
	
	int getCounter(){
		return pStorage->myCounter;
	}
	
	Storage* getStorage(){
		return pStorage;
	}
};

#endif