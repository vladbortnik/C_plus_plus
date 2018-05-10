#include <iostream>
#include <vector>
#include <stack>
using namespace std;

template <typename T>
void remove_duplicates(vector<T> &v){
	if(v.empty())
		return;
	int i = 0;
	stack<T> stk;
	
	stk.push(v[0]);
	for(i = 1; i < v.size(); i++){
		if(v[i] != stk.top()){
			stk.push(v[i]);
		}	
	}
	v.resize(stk.size());
	for(i = v.size() - 1; i >= 0; i--){
		v[i] = stk.top();
		stk.pop();
	}
}

template <typename T>
void print(const vector<T> &v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}


int main(){
	
	int a[] = {2, 2, 6, 7, 7, 7, 10, 10, 11};
	vector<int> v(a, a+9);

	remove_duplicates(v);
	print(v);
	
	return 0;
}