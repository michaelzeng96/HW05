#include "Date.h"

Date::Date()
{
	setDate(static_cast<int>(time(0)));
}

Date::Date(int elapseTime)
{
	setDate(elapseTime);
}

Date::Date(int sety, int setm, int setd)
{
	year = sety;
	month = setm;
	day = setd;
}

void Date::setDate(int elapseTime)
{
	long seconds = elapseTime;
	long minutes = seconds / 60;
	long hours = minutes / 60;
	day = hours / 24;

	// Get year
	year = 1970;
	while (day >= (isLeapYear(year) ? 366 : 365))
	{
		day = day - (isLeapYear(year) ? 366 : 365);
		year++;
	}

	// get month
	month = 1;
	while (day >= getNumberOfDaysInMonth(year, month))
	{
		day = day - getNumberOfDaysInMonth(year, month);
		month++;
	}
}

int Date::getyear()
{
	return year;
}

int Date::getmonth()
{
	return month;
}

int Date::getday()
{
	return day;
}

// Determine if it is a leap year
bool Date::isLeapYear(int year)
{
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

// Get the number of days in a month
int Date::getNumberOfDaysInMonth(int year, int month)
{
	if (month == 1 || month == 3 || month == 5 || month == 7 ||
		month == 8 || month == 10 || month == 12)
		return 31;

	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;

	if (month == 2) return isLeapYear(year) ? 29 : 28;

	return 0; // If month is incorrect
}