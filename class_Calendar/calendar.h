#ifndef _CALENDAR_H_
#define _CALENDAR_H_

class Calendar {

private:
	
	int month;
	int year;
	
	int daysInAMonth(int mm);
	bool isYearLeap();
	int numberOfDaysFromJanuaryFirst();
	int numberOfDaysFrom1900();

public:
	
	Calendar(int mm = 1, int yyyy = 1900);
	
	int getMonth();	
	int getYear();
	
	void setMonth(int mm);
	void setYear(int yyyy);
	
	void displayCalendar();

};

#endif