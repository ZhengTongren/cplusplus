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

	~Date
	{
		_year = 0;
	_month = 0;

	}
private:
	int _year;
	int _month;
	int _day;
};