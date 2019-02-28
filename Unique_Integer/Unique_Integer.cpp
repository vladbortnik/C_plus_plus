// Write a program to find the unique positive integer whose square has the form 1_2_3_4_5_6_7_8_9_0, where each "_" is a single digit. (from Euler)

#include <iostream>
using namespace std;


bool test_a_number(long x){
	
	int i = 9;
	long square = x * x;
	int Pattern[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	while (square > 0){
		
		int last_digit = square % 10;
	
		if (last_digit != Pattern[i])
			return false;
  	
    	// shift 2 digit left
		square /= 100;
		i--;
	}
	
  return true;
}

int main(){
	
	int min = 1010101010;	// smallest possible number: min*min=1020304050607080900
	int max = 1389026620;	// largest possible number: max*max=1929394959697989990

	for (int x = max; x >= min; x -= 10){
		
		if (test_a_number(x)){
			cout << x << endl;
			break;
		}
	}

  return 0;
}
