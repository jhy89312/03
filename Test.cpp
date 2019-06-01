#include "Date.h"

int main()
{
	int year, month;
	cin >> year >> month;
	Date date1(year, month);
	cin >> year >> month;
	Date date2(year, month);
	date1.print();
	date2.print();
	system("pause");
}