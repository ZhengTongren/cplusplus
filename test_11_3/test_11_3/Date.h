#pragma once
#include <iostream>
#include <assert.h>

using namespace std;



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

	bool operator==(const Date& y) const;
	bool operator!=(const Date& y) const;

	bool operator>(const Date& y) const;
	bool operator>=(const Date& y) const;
	bool operator<(const Date& y) const;
	bool operator<=(const Date& y) const;

	Date& operator+=(int day);
	Date operator+(int day) const;
	Date& operator-=(int day);
	Date operator-(int day) const;

	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);


	int operator-(const Date& y);

	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);

	Date* operator&();
	const Date* operator&() const;
};


ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);