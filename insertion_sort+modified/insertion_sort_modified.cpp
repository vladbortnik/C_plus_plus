#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

template <typename T>
void insertion_sort(T a [], int n){
	int i, j;
	for(i=1; i<n; i++){
		T tmp = a[i];
		j = i;
		while(j>=0 && a[j-1]>tmp){
			a[j] = a[j-1];
			j--;
		}
		a[j] = tmp;
	}
}

template <typename T>
void insertion_sort_modified(T a [], int n){
	for(int i=0; i<n-1; i++){
		int j = i+1;
		while(j>0 && a[j]<a[j-1]){
			swap(a[j], a[j-1]);
			j--;
		}
	}
}

void fill_array(int a[], int n){
	srand(time(0));
	for(int i=0; i<n; i++)
		a[i] = rand()%100;
}

void print_array(int a[], int n){
	cout << "\n\n**********************\n\n";
	for(int i=0; i<n; i++){
		cout << setw(3) << a[i] << " ";
		if((i+1) % 10 == 0){
			if(i == 0 || i == 10)
				;
			else
				cout << endl;
		}
		
	}
	cout << endl << endl;
}

int main(){
	
	const int n = 100;
	int a[n];
	
	fill_array(a, n);
	print_array(a, n);
	insertion_sort(a, n);
	print_array(a ,n);
	
	
	return 0;
}