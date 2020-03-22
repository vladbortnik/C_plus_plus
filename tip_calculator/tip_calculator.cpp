// // John and his family went on a holiday and went to 3 different restaurants. The bills were $124, $48 and $268.
//
// To tip the waiter a fair amount, John created a simple tip calculator (as a function). He likes to tip 20% of the bill when the bill is less than $50, 15% when the bill is between $50 and $200, and 10% if the bill is more than $200.
//
// In the end, John would like to have 2 arrays:
//
// 1) Containing all three tips (one for each biL)
//
// 2) Containing all three final paid amounts (bill + tip).
//


#include <iostream>
using namespace std;

	
	
	int tipCalculator(int bill){

		if(bill > 200){
			return bill * 0.1;
		}
		else if (bill < 50){
			return bill * 0.2;
		}
		else {
			return bill * 0.15;
		}
	}
	


int main(){
	
	
	int bill[3] = {0, 0, 0};
	
	cout << "Please enter 3 bills that John paid: ";
	cin >> bill[0] >> bill[1] >> bill[2];
	
	
	int tip[3] = {0, 0, 0};
	int total[3] = {0, 0, 0};
	
	
	for(int i = 0; i < 3; i++){
		tip[i] = tipCalculator(bill[i]);
		total[i] = bill[i] + tip[i];
	}	

	for(int i = 0; i < 3; i++){
		cout << "tip[" << i+1 << "] = " << tip[i] << ";  total[" << i+1 << "] = " << total[i] << endl;
	}
	
	
	return 0;
}