#include "Date.h"

Date::Date()
{
	year = 1;
	month = 1;
}
Date::Date(int newYear, int newMonth)
{
	year = newYear;
	month = newMonth;
}
void Date::setYear(int a)
{
	year = a;
}
void Date::setMonth(int b)
{
	month = b;
}
int Date::getYear()
{
	return year;
}
int Date::getMonth()
{
	return month;
}
void Date::print()
{
	cout << getYear() << "/" << getMonth() << endl;
}
