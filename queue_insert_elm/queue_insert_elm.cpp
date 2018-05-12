// Insern an element into n-th place of a queue (counting from the front).

#include <iostream>
#include <queue>
using namespace std;

template <typename T>
void fill_queue(queue<T> &q, int n){
	srand(time(0));
	for(int i = 0; i < n; i++)
		q.push(rand()%10);
}

template <typename T>
void print(queue<T> q){
	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

template <typename T>
void queue_insert(queue<T> &q, int n, const T &item){
	if(n < 1 || n > q.size() + 1)
		throw string("Range Error");
	queue<T> tmp;
	int i = n - 1;
	while(i > 0){
		tmp.push(q.front());
		q.pop();
		i--;
	}
	tmp.push(item);
	while(!q.empty()){
		tmp.push(q.front());
		q.pop();
	}
	q = tmp;
}

int main(){
	
	int x, n;
	queue<int> q;
	
	fill_queue(q, 8);
	print(q);
	
	cout << "Enter an element and its position: ";
	cin >> x >> n;
	
	try{
		queue_insert(q, n, x);
	} catch(string err) {
		cout << err << endl;
	}

	print(q);
	
	return 0;
}