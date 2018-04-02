// Stek

#include <iostream>
using namespace std;

struct Stek{
	int key;
	Stek* next;
};

void push(Stek** begin, int d){
	Stek* p = new Stek;
	p->key = d;
	p->next = *begin;
	*begin = p;
}

int pop(Stek** begin){
	int temp = (*begin)->key;
	Stek* p = *begin;
	*begin = (*begin)->next;
	delete p;
	return temp; 
}

void dump(Stek* begin){
	while(begin){
		cout << begin->key << " -> ";
		begin = begin->next;
	}
	cout << "NULL\n";
}


int main(){
	
	Stek* begin = NULL;
	
	for(int i=0;i<5;i++){
		push(&begin,i+i);
	}
	
	dump(begin);
	
	for(int i=0;i<2;i++){
		cout << pop(&begin) << endl;
	}
	
	dump(begin);
	
	return 0;
}