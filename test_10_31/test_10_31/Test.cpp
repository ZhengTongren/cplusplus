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
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}


	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}


	bool operator>(const Date& d)
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


	bool operator==(const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}


	int GetMonthDay(int year, int month)
	{
		assert(year >= 1 && month >= 1 && month <= 12);

		int Day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		if (month == 2 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))
		{
			return 29;
		}
		return Day[month];
	}


	Date& operator+=(int x)
	{
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


	Date operator+(int x)
	{
		Date tmp = *this;
		tmp += x;
		return tmp;
	}


	void Print()
	{
		cout << _year << " " << _month << " " << _day << endl;
	}
};


//
//int main()
//{
//	//Date d1(2023, 10 ,31);
//	////d1.Print();
//
//	//Date d2(2012, 10, 6);
//	////d2.Print();
//
//	//Date d3(d1);
//
//	//cout << (d1 > d2) << endl;
//	//cout << (d1 == d3) << endl;
//
//	return 0;
//}


int main()
{
	Date d1(2023, 10, 31);
	Date d2(d1);

	d1 += 50;
	d1.Print();
	//cout << d1 << endl;

	d2 + 50;
	d2.Print();

	return 0;
}