#include <iostream>
#include "bounded_queue.h"
using namespace std;

int main(){
	
	bounded_queue<int> bq;
	bq.push(3);
	bq.push(4);
	bq.push(11);
	bq.pop();
		
	try{
		cout << bq.front() << endl;
		cout << bq.size() << endl;
		cout << bq.empty() << endl;
		cout << bq.full() << endl;
	} catch (string err) {
		cout << err << endl;
	}
	
	return 0;
}