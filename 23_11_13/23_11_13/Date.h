#pragma once


#include <iostream>
using namespace std;
#include <assert.h>


class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print();

	Date& operator+=(int x);
	Date operator+(int x);

	Date operator-(const Date& d);
	Date operator-(int x);


private:
	int _year;
	int _month;
	int _day;
};