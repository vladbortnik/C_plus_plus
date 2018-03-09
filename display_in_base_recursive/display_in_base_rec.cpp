#include <iostream>
using namespace std;

// Display decimal number in any base <= 16.
// n != 0, b <= 16

/*
38%2 = 0 (6st)
19%2 = 1 (5nd)
 9%2 = 1 (4th)
 4%2 = 0 (3rd)
 2%2 = 0 (2nd)
 1%2 = 1 (1st)
 0 --- over
*/

void display_in_base(int n, int b){
	string digit = "0123456789ABCDEF";
	if(n == 0)
		return;
	display_in_base(n/b, b);
	cout << digit[n%b];
}

int main(){ 

	int n = 38;

	display_in_base(n, 2);
	cout << endl;
	
	return 0;
}