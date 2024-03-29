#pragma once


#include <iostream>
using namespace std;
#include <assert.h>


class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		assert(month >= 1 && month <= 12);
		_year = year;
		_month = month;
		_day = day;
	}

	

	void Print()
	{
		cout << _year << " " << _month << " " << _day << endl;
	}
	int GetMonthDay(int year, int month);

	bool operator==(const Date& d) const;
	bool operator>(const Date& d) const;
	bool operator<(const Date& d) const;
	bool operator!=(const Date& d) const;

	Date& operator+=(int x);
	Date operator+(int x);
	Date& operator-=(int x);
	Date operator-(int x);
	
	Date& operator++();
	Date operator++(int);

	int operator-(const Date& d);

private:
	int _year;
	int _month;
	int _day;
};