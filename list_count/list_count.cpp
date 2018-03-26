// count number of occurrences of (0 thru 4) in the List.

#include <iostream>
#include <list>
using namespace std;

template <typename T>
void fill_list(list<T> &l){
	srand(time(0));
	for(int i=0; i<20; i++){
		int x = rand()%5;
		cout << x << " ";
		l.push_back(x);
	}
	cout << endl;
}

template <typename T>
void print_list(const list<T> &l){
	typename list<T>::const_iterator it;
	for(it = l.begin(); it != l.end(); it++)
		cout << *it << " ";
	cout << endl;
}

template <typename T>
int count(const list<T>& l, const T& val){
	int result = 0;
	typename list<T>::const_iterator it = l.begin();
	while(it != l.end()){
		if(*it == val)
			result++;list
		it++;
	}
	return result;
}

int main(){
	
	list<int> l;
	
	fill_list(l);
	print_list(l);
	
	for(int i = 0; i < 5; i++)
		cout << "Count of number " << i << " is: " << count(l, i) << endl;
	
	return 0;
}