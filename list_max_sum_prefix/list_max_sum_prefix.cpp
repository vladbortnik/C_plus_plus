#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

template <typename T>
void fill_list(list<T> &l, int from = 0, int to = 10){
	srand(time(0));
	typename list<T>::iterator it = l.begin();
	while(it != l.end()){
		*it = rand() % (to - from + 1) + from;
		it++;
	}
}

template <typename T>
void print_list(const list<T> &l){
	typename list<T>::const_iterator it;
	for(it = l.begin(); it != l.end(); it++)
		cout << *it << " ";
	cout << endl;
}

template <typename T>
T list_max(const list<T>& l){
	T max = l.front();
	typename list<T>::const_iterator it = l.begin();
	while(it != l.end()){
		if(*it > max)
			max = *it;
		it++;
	}
	return max;
}

template <typename T>
T list_sum(const list<T>& l){
	T sum = 0;
	typename list<T>::const_iterator it = l.begin();
	while(it != l.end()){
		sum += *it;
		it++;
	}
	return sum;
}

template <typename T>
T list_middle(const list<T>& l){
	int mid = l.size()/2;
	typename list<T>::const_iterator it = l.begin();
	for(int i = 0; i < l.size()/2; i++)
		it++;
	return *(it);
}

template <typename T>
list<T> list_prefix(const list<T>& l, int n){
	list<T> lst(n);
	typename list<T>::const_iterator it1 = l.begin();
	typename list<T>::iterator it2 = lst.begin();
	for(int i=0; i<n; i++){
		*it2 = *it1;
		it1++; it2++;
	}
	return lst;
}

int main(){
	
	list<int> l(6);
	list<int> n(3);
	
	fill_list(l);
	print_list(l);
	
	cout << list_max(l) << endl;
	cout << list_sum(l) << endl;
	cout << list_middle(l) << endl;
	
	n = list_prefix(l, 3);
	print_list(n);

	return 0;
}
