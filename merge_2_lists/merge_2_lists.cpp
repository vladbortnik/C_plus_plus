// Merge list L and M into list N(L0, M0, L1, M1, ..., Li, Mj).

#include <iostream>
#include <list>
using namespace std;

template <typename T>
void fill_list(list<T> &l, int from, int to){
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
list<T> merge_lists(const list<T>& l, const list<T>& m){
	int i = l.size() + m.size();
	list<T> temp;
	typename list<T>::const_iterator it1 = l.begin();
	typename list<T>::const_iterator it2 = m.begin();
	while(i > 0){
		if(it1 != l.end()){
			temp.push_back(*it1);
			it1++;
		}
		if(it2 != m.end()){
			temp.push_back(*it2);
			it2++;
		}
		i--;
	}
	return temp;
}

int main(){
	
	int i, j;
	
	cout << "Enter number from 1 to 5: ";
	cin >> i;
	cout << "Enter number from 1 to 10: ";
	cin >> j;
	
	list<int> L(i), M(j), N(i+j);
	
	fill_list(L, 0, 99);
	fill_list(M, 100, 199);
	print_list(L);m
	print_list(M);
	
	N = merge_lists(L, M);
	print_list(N);
	
	return 0;
}