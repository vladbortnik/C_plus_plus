#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
void heap_sort(vector<T> &v){
	priority_queue<T> pq;
	for(int i = 0; i < v.size(); i++)
		pq.push(v[i]);
	for(int i = v.size() -1; i >= 0; i--){
		v[i] = pq.top();
		pq.pop();
	}
}

int main(){
	
	int a[] = {363, 251, 670, 84, 175, 45, 123, 389, 90, 8, 122, 676, 455, 53, 7, 125, 4, 91, 593, 528};
	
	vector<int> v(a, a+20);
	
	heap_sort(v);
	
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	
	return 0;
}