#include "Date.h"


int Date::GetMonthDay(int year, int month)
{
	assert(month >= 1 && month <= 12);
	int Day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
	{
		return 29;
	}
	return Day[month];
}


Date& Date::operator+=(int x)
{
	if (x < 0)
	{
		return *this -= (-x);
	}

	_day += x;
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


void Date::Print()
{
	cout << _year << " " << _month << " " << _day << endl;
}


Date Date::operator+(int x)
{
	Date tmp(*this);
	tmp += x;
	return tmp;
}


Date& Date::operator-=(int x)
{
	if (x < 0)
	{
		return *this += (-x);
	}
	_day -= x;
	while (_day <= 0)
	{
		_month--;
		if (_month == 0)
		{
			_month = 12;
			_year--;
		}
		_day += GetMonthDay(_year, _month);
	}

	return *this;
}


Date Date::operator-(int x)
{
	Date tmp(*this);
	tmp -= x;
	return tmp;
}


//Date Date::operator-(const Date& d)
//{
//	int x
//}


bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}


bool Date::operator>(const Date& d)
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year && _month > d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day > d._day)
	{
		return true;
	}

	return false;
}