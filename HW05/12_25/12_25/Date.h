#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <ctime>
using namespace std;

class Date
{
public:
	Date();
	Date(int elapseTime);
	Date(int sety, int setm, int setd);
	int getyear(void);
	int getmonth(void);
	int getday(void);
	void setDate(int elapseTime);
	bool isLeapYear(int year);
	int getNumberOfDaysInMonth(int year, int month);
private:
	int year;
	int month;
	int day;
	
};



#endif