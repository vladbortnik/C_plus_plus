// Odnosvyazniy spisok (insert ellement)


#include <iostream>
using namespace std;

struct Data{
	int x;
};

struct List{
	Data info;
	List* next;
};

void init(List** begin,const Data dt[]){
	int i = 0;
	*begin = new List;
	(*begin)->info.x = 0;
	(*begin)->next = NULL;
	List* p = *begin;
	
	while(dt[i].x<=9){
		p->next = new List;
		p = p->next;
		p->info.x = dt[i].x;
		p->next = NULL;
		i++;
	}
}

void dump(List* begin){
	while(begin){
		cout << begin->info.x << " -> ";
		begin = begin->next;
	}
	cout << begin << endl;
}

void changeBegin(List** begin, Data d){
	List* p = *begin;
	*begin = new List;
	(*begin)->info = d;
	(*begin)->next = p;
}

void changeEnd(List** begin, Data d){
	if(!(*begin)){
		*begin = new List;
		(*begin)->info = d;
		(*begin)->next = NULL;
		return;
	}
	
	List* p = *begin;
	while(p->next){
		p = p->next;
	}
	p->next = new List;
	p = p->next;
	p->info = d;
	p->next = NULL;
}

void insert(List** begin, Data d){
	
	if(*begin == NULL){				// Case when List is empty.
		*begin = new List;
		(*begin)->info.x = d.x;
		(*begin)->next = NULL;
		return;
	}
	
	if((*begin)->info.x > d.x){		// Case when new element has to go
		List* p = new List;			// ... on the begin spot.
		p->info.x = d.x;
		p->next = (*begin);
		(*begin) = p;
		return;
	}
	
	List* p = *begin;			// Case when new element goes to his place.
	List* p0 = p;
	while(p){
		if(p0->info.x < d.x && p->info.x >= d.x){
			p0->next = new List;
			p0 = p0->next;
			p0->info.x = d.x;
			p0->next = p;
			return;
		}
		p0 = p;
		p = p->next;
	}
	
	p0->next = new List;			// Case when new element goes
	p = p0->next;					// ...to the end.
	p->info.x = d.x;
	p->next = NULL;
}

void deleteAnElement(List** begin, Data d){
	
	if(!(*begin)){			// If SPisok is empty.
		return;
	}
	
	List* p = *begin;		// If d == first element.
	if(p->info.x == d.x){
		*begin = (*begin)->next;
		delete p;
		return;
	}
	
	p = (*begin)->next;		
	List* p0 = *begin;
	while(p){
		if(p->info.x == d.x){  // If d is in the middle or last one.
			p0->next = p->next;
			delete p;
			return;
		}
		p0 = p;
		p = p->next;
	}
}

void releaseMemory(List** begin){
	
	if(!(*begin)){			// If Spisok is empty.
		return;
	}
	
	List* p = *begin;		// If Spisok is not empty.
	List* p0;
	while(p){
		p0 = p;
		p = p->next;
		delete p0;
	}
	*begin = NULL;
}

int main(){
	
	Data dt [] = {1,3,5,7,9};
	Data d = {8}, d2 = {-1}, d3 = {13}, d4 = {7};
	List* begin = NULL;	
	
	init(&begin,dt);
	changeBegin(&begin,d2);
	insert(&begin,d);
	changeEnd(&begin,d3);
	deleteAnElement(&begin,d4);
	dump(begin);
	releaseMemory(&begin);
	dump(begin);
	
	return 0;
}