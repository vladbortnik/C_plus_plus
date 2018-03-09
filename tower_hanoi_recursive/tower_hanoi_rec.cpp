#include<iostream>
using namespace std;

//tower of HANOI function implementation
void hanoi(int n, char a, char b, char c){ 
	if(n == 1){
		cout << "Move Disk " << n << " from " << a << " to " << c << endl;
		return;
	}
	hanoi(n-1, a, c, b);
	cout << "Move Disk " << n << " from " << a << " to " << c << endl;
	hanoi(n-1, b, a, c);
}

int main(){ 
	int n;
	cout << "Enter no. of disks:";	
	cin >> n;
	
	hanoi(n, 'A', 'B', 'C');
	
	return 0;
}