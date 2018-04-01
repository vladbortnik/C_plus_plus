// Fill dynamically allocated matrix zigzag way.

#include <iostream>
#include <iomanip>
using namespace std;

void fillZigzag(int **p, int n, int m){
	
	if(n != m){
		cout << "ERROR: Matrix must be squared." << endl;
		return;
	}
	
	int i = 0, j = 0, counter = 0, limit;
	p[i][j] = counter;
	
	while(i!=n-1 || j!=m-1){
		
		if(j < n-1) j++;
		else i++;
		
		limit = i;
		for(;j>limit;i++,j--)
			p[i][j] = ++counter;
		p[i][j] = ++counter;
		
		if(i==n-1 && j==m-1) break;
		
		if(i < n-1) i++;
		else j++;
		
		limit = j;
		for(;i>limit;i--,j++)
			p[i][j] = ++counter;
		p[i][j] = ++counter;
	}
}

int main(){
	
	int n=10, m=10;
	
	int **p = new int* [n];
	for(int i=0;i<m;i++){
		p [i] = new int [m];
	}
	
	fillZigzag(p, n, m);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << setw(2) << p[i][j] << ' ';
		}
		cout << endl;
	}
	
	for(int i=0; i<m; i++){
		delete [] p[i];
	}
	delete [] p;
	
	return 0;
}









