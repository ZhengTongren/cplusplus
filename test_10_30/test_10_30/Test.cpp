#include <iostream>
using namespace std;


class Date
{
private:
	int _year;
	int _month;
	int _day;

public:
	Date()
	{}

	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

};


int main()
{
	Date d1;
	Date d2(2023, 10, 30);

	return 0;
}