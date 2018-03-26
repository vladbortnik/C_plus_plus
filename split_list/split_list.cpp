// split 1 lits into 2 lists: even and odd index numbers.

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

template <typename T>
void split_list(const list<T>& aList, list<T>& list1, list<T>& list2){
	typename list<T>::const_iterator it = aList.begin();
	int i = 0;
	while(it != aList.end()){
		if(i % 2 == 0)
			list2.push_back(*it);
		else
			list1.push_back(*it);
		i++;
		it++;
	}
}

int main(){
	
	list<int> l(10), l1, l2;
	
	fill_list(l);
	print_list(l);
	
	split_list(l, l1, l2);
	print_list(l1);
	print_list(l2);
	
	return 0;
}