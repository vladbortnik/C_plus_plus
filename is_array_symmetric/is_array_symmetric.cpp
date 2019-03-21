// Arrays: Write a program that tests if a 2D square array is symmetric about the diagonal from (0,0) to (n-1,n-1).

#include <iostream>
using namespace std;

bool is_array_symmetric(int A[10][10]){
	for(int i=0; i<10; i++){
		for(int j=0; j<i; j++){
			if(A[i][j] != A[j][i])
				return false;
		}
	}
	return true;
}

int main(){
	
	int A[10][10];
	srand(time(0));
	int x = 0;
	
	for(int i = 0; i < 10; i++){			// fill 2D Array symmetrically
		for(int j = 0; j <= i; j++){
			x = rand()%10;
			A[i][j] = x;
			A[j][i] = x;
		}
	}
	
	A[1][3] = 10;

	for(int i = 0; i < 10; i++){			// print array
		for(int j = 0; j < 10; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	if(is_array_symmetric(A))
		cout << "\nArray is symmetric!" << endl << endl;
	else
		cout << "\nArray is NOT symmetric!" << endl << endl;


	return 0;
}
