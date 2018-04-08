// Dynamic matrix multiplication.


#include <iostream>
using namespace std;


int main() {
	
	int n1, m1, n2, m2;
	
	cout<<"Enter n & m of 2 matrix: ";
	cin>>n1>>m1>>n2>>m2;
	
	int** p1 = new int* [n1];			// Declare 2 matrix.
	for(int i=0;i<n1;i++){
		p1[i]=new int [m1];
	}
	
	int** p2 = new int* [n2];
	for(int i=0;i<n2;i++){
		p2[i]=new int [m2];
	}
	
	srand(time(0));
	
	for(int i=0;i<n1;i++){			// Fill 2 matrixes.
		for(int j=0;j<m1;j++){
			p1[i][j]=rand()%10;
		}
	}
	
	for(int i=0;i<n2;i++){
		for(int j=0;j<m2;j++){
			p2[i][j]=rand()%10;
		}
	}
	
	cout<<"Matrix 1: "<<endl;
	
	for(int i=0;i<n1;i++){			// COUT both matrixes.
		for(int j=0;j<m1;j++){
			cout<<p1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Matrix 2: "<<endl;
	for(int i=0;i<n2;i++){			
		for(int j=0;j<m2;j++){
			cout<<p2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	int** p3 = new int* [n1];		// Declare 3rd matrix.
	for(int i=0;i<n1;i++){
		p3[i]=new int [m2];
	}
	
	for(int i=0;i<n1;i++){			// Mult p1 and p2 to p3.
		for(int j=0;j<m2;j++){
			for(int e=0;e<n2;e++){
				p3[i][j]+=p1[i][e]*p2[e][j];
			}
		}
	}				
	
	cout<<"Matrix 3: "<<endl;
	for(int i=0;i<n1;i++){			// COUT p3.
		for(int j=0;j<m2;j++){
			cout<<p3[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	
	for(int i=0;i<n1;i++){			// Delete p1, p2, p3.
		delete [] p1[i];
	}
	delete [] p1;
	
	for(int i=0;i<n2;i++){			// Delete p1, p2, p3.
		delete [] p2[i];
	}
	delete [] p2;
	
	for(int i=0;i<n1;i++){			// Delete p1, p2, p3.
		delete [] p3[i];
	}
	delete [] p3;
	
			
	return 0;
}

