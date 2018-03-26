#include <iostream>
#include <list>
using namespace std;

void fill_list(list<int> &l){
	srand(time(0));
	list<int>::iterator it;
	for(it = l.begin(); it != l.end(); it++){
		*it = rand()%10;
	}
}

void print_list(list<int> &l){
	list<int>::iterator it;
	for(it = l.begin(); it != l.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void list(list<int> &l){
	list<int>::iterator it1 = l.begin();
	while(it1 != l.end()){
		list<int>::iterator it2 = it1;
		int temp = *it1;
		it2++;
		while(it2 != l.end()){
			if(*it2 == temp)
				l.erase(it2++);
			else
				it2++;
		}
		it1++;
	}
}

int main(){
	
	list<int> l(30, 3);
	
	fill_list(l);
	print_list(l);
	
	cout << "List size = " << l.size() << endl;
	
	remove_dupl(l);
	print_list(l);
	
	cout << "List size = " << l.size() << endl;
	
	
	return 0;
}