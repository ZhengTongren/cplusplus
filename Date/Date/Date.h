#pragma once

#include <iostream>
using namespace std;
#include <assert.h>


class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		:_year(year)
		,_month(month)
		,_day(day)
	{}

	~Date()
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}

	void Print();
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);

private:
	int _year;
	int _month;
	int _day;
};


ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);