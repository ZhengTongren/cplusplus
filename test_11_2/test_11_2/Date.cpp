#include "Date.h"

//int Add(int x, int y)
//{
//	return x + y;
//}


// Date::Date(int year = 1997, int month = 1, int day = 1) // error
Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
}


void Date::Print()
{
	cout << _year << " " << _month << " " << _day << endl;
}


int Date::GetMonthDay(int year, int month)
{
	assert(month > 0 && month < 13);
	int Day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
	{
		return 29;
	}
	return Day[month];
}


Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		*this -= (-day);
	}
	_day += day;

	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}

	return *this;
}


Date Date::operator+(int day)
{
	Date tmp(*this);

	tmp += day;
	return tmp;
}


Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		*this += (-day);
	}
	_day -= day;

	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_month = 12;
			_year--;
		}
		_day += GetMonthDay(_year, _month);
	}

	return *this;
}


Date Date::operator-(int day)
{
	Date tmp(*this);

	tmp -= day;
	return tmp;
}