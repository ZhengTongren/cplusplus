#include <iostream>
using namespace std;


class Date
{
public:
	Date()
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}

	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	Date d2(2022, 6, 7);


	return 0;
}