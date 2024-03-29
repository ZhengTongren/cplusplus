#pragma once
#include <iostream>
#include <assert.h>

using namespace std;


//inline int Add(int x, int y)
//{
//	return x + y;
//}


class Date
{
private:
	int _year;
	int _month;
	int _day;

public:

	Date(int year = 1997, int month = 1, int day = 1);
	void Print();

	int GetMonthDay(int year, int month);

	bool operator==(const Date& y);
	bool operator!=(const Date& y);

	bool operator>(const Date& y);
	bool operator>=(const Date& y);
	bool operator<(const Date& y);
	bool operator<=(const Date& y);

	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);

	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);


	int operator-(const Date& y);
};