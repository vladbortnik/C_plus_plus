// Symmetric difference of set A and set B (elements of A and B but not both).

#include <iostream>
#include <set>
using namespace std;

template <typename T>
set<T> symmetric_difference(const set<T>& setA, const set<T>& setB){
	set<T> setC;
	typename set<T>::const_iterator it = setA.begin();
	while(it != setA.end()){
		if(!setB.count(*it)){
			setC.insert(*it);
		}
		it++;
	}
	it = setB.begin();
	while(it != setB.end()){
		if(!setA.count(*it)){
			setC.insert(*it);
		}
		it++;
	}
	return setC;
}

template <typename T>
void print_set(const set<T>& setA){
	typename set<T>::const_iterator it;
	it  = setA.begin();
	while(it != setA.end()){
		cout << *it << " ";
		it++;
	}
	cout << endl;
}

int main(){
	
	int arr1[] = {1, 4, 3, 2, 5};
	int arr2[] = {6, 4, 5, 8, 7};
	int arrSize1 = sizeof(arr1)/sizeof(int);
	int arrSize2 = sizeof(arr2)/sizeof(int);
	set<int> setA(arr1, arr1 + arrSize1);
	set<int> setB(arr2, arr2 + arrSize2);
	set<int> setC;
	
	cout << "set A = ";
	print_set(setA);
	cout << "set B = ";
	print_set(setB);
	
	setC = symmetric_difference(setA, setB);
	
	cout << "set C = ";
	print_set(setC);
	
	return 0;
}