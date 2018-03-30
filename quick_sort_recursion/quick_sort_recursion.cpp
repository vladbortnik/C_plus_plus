// Fast Sort using Recursion.

#include <iostream>
#include <fstream>
#include <iomanip>		// to use setw(n); function.
using namespace std;

const int n = 10*1000*1000;		// Huge arrays can be declared outside of main function
int a[n];				
int k = 0;				

int l = 0;						
int r = 10*1000*1000-1;			


template <typename T>
void fillAnArray(T a[], int n){
	srand(time(0));
	for(int i=0;i<n;i++){
		a[i] = rand()%100;
	}
}

template <typename T>
void dump(T a[], int n, int k){
	for(int i=0;i<n;i++){
		cout << setw(2) << a[i] << ' ';
	}
	cout << endl << endl;
}

template <typename T>
void quickSort(T a[], int l, int r){
	
	int i, j;
	i = l;
	j = r;
	int middle = a[(i+j)/2];
	
	do{
		
		while(a[i] < middle) i++;
		while(a[j] > middle) j--;
		
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
		
	}while(i<j);
	
	if(i < r) quickSort(a,i,r);		// Условия выхода из рекурсии.
	if(j > l) quickSort(a,l,j);		// Условия выхода из рекурсии.
	
}

template <typename T>
void swap(T &a, T &b){
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
bool inOrder(T a[], int n){
	for(int i=1;i<n;i++){
		if(a[i-1]>a[i])
			return 0;
	}
	return 1;
}


int main(){
 
	system("clear");
	

	fillAnArray(a,n);
//	dump(a,n);
	quickSort(a,l,r);
//	dump(a,n);
	
	
	if(inOrder(a,n))
		cout << "Array is in order!\n";
	else 
		cout <<"NOT IN ORDER\n";
	
	//	cin.get(); 
  
    return 0;
}
