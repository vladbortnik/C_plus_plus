#include <iostream>
#include <iomanip>			// for function set();
using namespace std;

long fuct(long n){
    if(n<2)
    	return 1;
    else
    	return n*fuct(n-1);
}

int main(){
	
	system("clear");
    
    int n = 15;
    
    for(int i=0;i<n;i++){
    	cout << setw(2) << i << "! = " << fuct(i) << endl;
    }
	
	// set() sdvigaet chisla rovno
    
	cin.get();
	
    return 0;
}
