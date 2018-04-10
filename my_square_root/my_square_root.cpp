#include <iostream>
#include <cmath>
using namespace std;
 
double squareroot(double x){
	
	double min, max, mid;
	
	if(x > 1){
		max=x; 
		min=1;
	}
	else if(x<1 && x>0){
		max=1; 
		min=x;
	}
	else if(x == 1) 
		return 1;
	else 
		return 0;
	
	mid = (max+min)/2;
	
	while((max-min) > 0.00000001){
		
		if((mid*mid) > x) 
			max=mid;
		else if((mid*mid) < x) 
			min=mid;
		else 
			return mid;
		
		mid = (max+min)/2;		
	}
	return mid;
}

 
int main(){
	
	double x, y, z;
	cout << "Enter any positive number: ";
	cin >> x;
	
	y = squareroot(x);
	z = sqrt(x);
	
	cout << "My square root = " << y << endl;
	cout << "STL square root = " << z << endl;
  
    return 0;
}