// Write a function that takes an integer n as a parameter and prints the first n rows of the Pascal's triangle.

#include <iostream>
using namespace std;

int main(){
    int A[100];
    int n, i, j;
    cout << "Enter number of rows: ";
    cin >> n;

    for(i = 1; i <= n ; i++)
      A[i] = 0;
    A[0] = 1;

    for(j = 1 ; j <= n; j++){
      for(i = j; i >= 1 ; i--){
        A[i] = A[i-1] + A[i];
      }
      for(i = 0; i <= j ; i++)
         cout << "  " << A[i];
      cout << endl;
    }

    return 0;
}
