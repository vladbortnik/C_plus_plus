/*
Compute sum of squares of those numbers whose absolute value < 5.5
*/


#include <iostream>
#include <cmath>
using namespace std;

double sqrd(double x){
	return x*x;
}


int main(){
	 
	
	double sum=0;
	unsigned n; 
	
	cout<<"enter length of an array ";
	cin>>n;

	
	double a[n];
	
	for(int i=0; i<n; i++){
		cin>>a[i];
		if(abs(a[i]) < 5.5) 
			sum += sqrd(a[i]);
	}
	
	cout << sum << endl;
	
	
    return 0;
}