#include <iostream>
//#include <stdio.h>

using namespace std;

class time24 {
private:
   int hour, minute;

   void normalize(){
       hour += minute/60;
       hour = hour%24;
       minute = minute%60;
   }
	
public:
   time24(int h, int m): hour(h), minute(m) {
       normalize();
   }

   void addTime(int m){
       minute += m;
       normalize();
   }

   // the duration from this to time t
   time24 duration(const time24& t){
       int thisMinutes = hour*60+minute;
       int tMinutes = t.hour*60+t.minute;
       if (tMinutes < thisMinutes)
           throw "negative duration";
       return time24(0,tMinutes-thisMinutes);
   }

   int getHour(){
       return hour;
   }

   int getMinute(){
       return minute;
   }      

   void print(){
       printf("%d::%d\n", hour, minute);
//       cout << hour << "::" << minute;
   }
};

int main(){
	
   time24 startTime(18,30);
   time24 endTime(22,0);
   time24 classTime = startTime.duration(endTime);
   classTime.print();
   
   return 0;
} 