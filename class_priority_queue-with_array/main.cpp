#include <iostream>
#include "priority_queue.h"
using namespace std;

int main(){
	
	pr_queue<int> pq;
	
	try{		
		pq.push(99, 3);	
		pq.push(999, 2);
		cout << pq.top() << endl;
		cout << "size = " << pq.size() << endl;
		pq.pop();
		pq.pop();
		cout << "empty = " << pq.empty() << endl;

	} catch (string err) {
		cout << err << endl;
		exit(1);
	}
	
	return 0;
}