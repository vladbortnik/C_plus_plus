// What absolute int value occurs in array more than the others.
// Array is random numbers from -20 to 20.

#include <iostream>
#include <iomanip>
#include <cmath>
//#include "sauce.cpp"

using namespace std;


void fillAnArray(int a[], int n){
	srand(time(0));
	for(int i=0;i<n;i++){
		a[i]=rand()%41-20;
	}
}
	
	
void dump(int a[], int n){
	for(int i=0;i<n;i++){
		cout << setw(3) << a[i] << " ";
		if(i==14)
			cout << endl;
	}
	cout << endl;
}
	
int findAbsElement(int a[], int b[], int n, int &k){
	int x=0;
	int dex=0;
	for(int i=0;i<n;i++){
		b[abs(a[i])]++;
	}
	x=b[0];
	dex=0;
	for(int i=0;i<k;i++){
		if(b[i]>x){
			x=b[i];
			dex=i;
		}
	}
	k=x;
	return dex;
}


int main(){
	
	int x = -1;
	int n = 30;
	int k = 21;
	int a[n];
	int b[21]={0};
	
	fillAnArray(a,n);
	dump(a,n);
	
	x = findAbsElement(a,b,n,k);
	
	cout << "The most common abs. element is: " << x << endl;
	cout << x << " has been met in array " << k << " times\n";
	
	return 0;
}