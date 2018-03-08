#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "calendar.h"
using namespace std;

void displayYearCalendar(int yyyy){
	Calendar cal;
	try{
		cal.setYear(yyyy);
	} catch(string err){
		cout << err << endl;
		exit(1);
	}

	for(int i=1; i<=12; i++){
		cal.setMonth(i);
		cal.displayCalendar();
	}
}


int main(){
	
	int yyyy;
	cout << "Please enter a year (YYYY) to print: ";
	cin >> yyyy;
	
	displayYearCalendar(yyyy);
	
	return 0;
}