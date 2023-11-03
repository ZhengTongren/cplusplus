#include "Date.h"



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


bool Date::operator==(const Date& y)
{
	return _year == y._year
		&& _month == y._month
		&& _day == y._day;
}


bool Date::operator!=(const Date& y)
{
	return !(*this == y);
}


bool Date::operator>(const Date& y)
{
	if (_year > y._year)
	{
		return true;
	}
	else if (_year == y._year && _month > y._month)
	{
		return true;
	}
	else if (_year == y._year && _month == y._month && _day > y._day)
	{
		return true;
	}

	return false;
}


bool Date::operator>=(const Date& y)
{
	return (*this > y) || (*this == y);
}


bool Date::operator<(const Date& y)
{
	return !(*this >= y);
}


bool Date::operator<=(const Date& y)
{
	return !(*this > y);
}


int Date::operator-(const Date& y)
{
	int flag = 1;
	Date max = *this;
	Date min = y;

	if (max < min)
	{
		max = y;
		min = *this;
		flag = -1;
	}

	int n = 0;
	while (min != max)
	{
		min += 1;
		n++;
	}

	return n * flag;
}


Date& Date::operator++()
{
	*this += 1;
	return *this;
}


Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}


Date& Date::operator--()
{
	*this -= 1;
	return *this;
}


Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;

	return tmp;
}


ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "Äê" << d._month << "ÔÂ" << d._day << "ÈÕ" << endl;

	return out;
}


istream& operator>>(istream& in,  Date& d)
{
	in >> d._year >> d._month >> d._day;

	return in;
}