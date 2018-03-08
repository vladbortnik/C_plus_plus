#include <iostream>
#include <iomanip>
#include "calendar.h"
using namespace std;


Calendar::Calendar(int mm, int yyyy){
	if(mm < 1 || mm > 12){
		string error = "Calendar constructor: invalid month";
		throw error;
	}
	if(yyyy < 1900){
		string error = "Calendar constructor: invalid year";
		throw error;
	}
	month = mm;
	year = yyyy;
}

int Calendar::getMonth(){
	return month;
}
	
int Calendar::getYear(){
	return year;
}

void Calendar::setMonth(int mm){
	if(mm < 1 || mm > 12){
		string error = "Calendar setMonth(): invalid month";
		throw error;
	}
	month = mm;
}
	
void Calendar::setYear(int yyyy){
	if(yyyy < 1900){
		string error = "Calendar setYear(): invalid year";
		throw error;
	}
	year = yyyy;
}

int Calendar::daysInAMonth(int mm){
	switch(mm){
		case  1: return 31;
		case  2: if(isYearLeap()) return 29; else return 28;
		case  3: return 31;
		case  4: return 30;
		case  5: return 31;
		case  6: return 30;
		case  7: return 31;
		case  8: return 31;
		case  9: return 30;
		case 10: return 31;
		case 11: return 30;
		case 12: return 31;
	}
}

bool Calendar::isYearLeap(){
	if(year%4 == 0)
		return true;
	else
		return false;
}

int Calendar::numberOfDaysFromJanuaryFirst(){
	int numberOfDaysFromJanuaryFirst = 0;
	for(int i=1; i<month; i++){
		numberOfDaysFromJanuaryFirst += daysInAMonth(i);
	}
	return numberOfDaysFromJanuaryFirst;
}

int Calendar::numberOfDaysFrom1900(){
	int numberOfDaysFrom1900 = 0;
	int numberOfLeapYearsFrom1900 = 0;
	
	numberOfLeapYearsFrom1900 = (year - 1900)/4 + 1;
	
	if(isYearLeap())
		numberOfLeapYearsFrom1900--;
	
	numberOfDaysFrom1900 = 
		(year - 1900) * 365 + numberOfLeapYearsFrom1900 +
		numberOfDaysFromJanuaryFirst();
	
	return numberOfDaysFrom1900;
}

void Calendar::displayCalendar(){
	cout << "\n******************************\n\n";
	cout << month << "/" << year << endl << endl;
	cout << "Mon Tue Wed Thu Fri Sat Sun \n\n";
	
	// skip spaces up to the first day of the month
	int dayNum = numberOfDaysFrom1900() % 7;
	if(dayNum != 0)
		dayNum--;
	else 
		dayNum = 6;
	for(int i=0; i<dayNum; i++){
		cout << setw(4) << " ";
	}
	// print month
	for(int i=1; i<=daysInAMonth(month); i++){
		cout << setw(3) << i << " ";
		if((i+dayNum)%7 == 0){
			if(dayNum == 0 && i == 1)
				;
			else
				cout << endl;
		}
	}
	cout << endl << endl;
}













