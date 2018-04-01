// Recursion

#include <iostream>
using namespace std;


void Print(char* str, int l, int r, int level){
	
	if(level == 0)
		return;
	
	int middle = (l+r)/2;
	str[middle] = '|';
	
	Print(str,l,middle,level-1);
	Print(str,middle,r,level-1);
}


int main(){
	
	
	char str[66];
	str[65] = '\0';
	int min = 0, max = 64;
	str[min] = str[max] = '|';
	
	for(int i=1;i<64;i++)
		str[i] = ' ';
	
	
	cout << str << endl;
	
	for(int i=1;i<6;i++){
		Print(str,min,max,i);
		cout << str << endl;
		
		for(int i=1;i<64;i++)
			str[i] = ' ';
	}
	
	return 0;
}
