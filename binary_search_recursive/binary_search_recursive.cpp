#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}

int birary_search_rec(int a[], int from, int to, int target){
	int middleIndex = (from + to)/2;
	if(from >= to)
		return -1;
	if(target == a[middleIndex])
		return middleIndex;
	else if(target > a[middleIndex])
		return birary_search_rec(a, middleIndex + 1, to, target);
	else
		return birary_search_rec(a, from, middleIndex, target);
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
	cout << endl;
}

void sort(int a[], int n){
	for(int i=0; i<n-1; i++){
		int temp = a[i];
		int index = i;
		for(int j=i+1; j<n; j++){
			if(a[j] < temp){
				temp = a[j];
				index = j;
			}
		}
		swap(a[i], a[index]);
	}
}

int main(){
	
	system("clear");
	
	const int n = 100;
	int x = 55;
	int* a = new int [n];
	fill_array(a, n);
	print_array(a, n);
	sort(a, n);
	print_array(a, n);
	
	int result = birary_search_rec(a, 0, n, x);
	
	cout << "\n\nBinary Search result for number x = " << x << ": " << result;	
	cout << endl << endl;	
	
	
	return 0;
}