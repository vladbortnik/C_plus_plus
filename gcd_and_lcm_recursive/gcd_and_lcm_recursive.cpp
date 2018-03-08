#include <iostream>
using namespace std;

long factorial_rec(int n){
	if(n == 0 || n == 1)
		return 1;
	return n * factorial_rec(n-1);
}

int gcd_rec(int num1, int num2){
	if(num2 == 0)
		return num1;
	return gcd_rec(num2, num1 % num2);
}

int lcm_rec(int num1, int num2){
	static int lcm = 1;
	if(lcm % num1 == 0 && lcm % num2 == 0)
		return lcm;
	lcm++;
	return lcm_rec(num1, num2);
}

int main(){
	
	int x = 5;
	int num1 = 5, num2 = 6;
	
	cout << "fact = " << factorial_rec(x) << endl;
	cout << "GCD = " << gcd_rec(num1, num2) << endl;
	cout << "LCM = " << lcm_rec(num1, num2) << endl;
	
	return 0;
}