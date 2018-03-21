#include <iostream>
#include <iomanip>

using namespace std;

void fillMatrix(int** M, int N){
	srand(time(0));
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			M[i][j] = rand()%101-50;
		}
	}
}

void dump(int** M, int N){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << setw(3) << M[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	
	int N = 10;
	
	int* tmp = (int*)malloc(sizeof(int)*N*N);
	int** M = (int**)malloc(sizeof(int*)*N);
	for(int i=0;i<N;i++){
		M[i] = tmp + i*N;
	}
		
	fillMatrix(M,N);
	dump(M,N);
	
	free (M);
	free (tmp);
		
	return 0;
}