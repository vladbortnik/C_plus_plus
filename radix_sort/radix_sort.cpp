#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
void distribute(vector<T> &v, queue<T> qs[], int pow){
	for(int i = 0; i < v.size(); i++){
		qs[(v[i]/pow)%10].push(v[i]);
	}
}

template <typename T>
void collect(vector<T> &v, queue<T> qs[]){
	int j = 0;
	for(int i = 0; i < 10; i++){
		while(!qs[i].empty()){
			v[j++] = qs[i].front();
			qs[i].pop();
		}
	}
}

template <typename T>
void radix_sort(vector<T> &v, int pow){
	int digit = 1;
	queue<T> qs[10];
	for(int i = 0; i < pow; i++){
		distribute(v, qs, digit);
		collect(v, qs);
		digit *= 10;
	}
}

int main(){
	
	int a[] = {363, 251, 670, 84, 175, 45, 123, 389, 90, 8, 122, 676, 455, 53, 7, 125, 4, 91, 593, 528};
	
	vector<int> v(a, a+20);
	
	radix_sort(v, 3);
	
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	
	return 0;
}