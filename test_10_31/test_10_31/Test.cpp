#include <iostream>
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


	void Print()
	{
		cout << _year << " " << _month << " " << _day << endl;
	}
};


int main()
{
	Date d1(2023, 10 ,31);
	//d1.Print();

	Date d2(2012, 10, 6);
	//d2.Print();

	Date d3(d1);

	cout << (d1 > d2) << endl;
	cout << (d1 == d3) << endl;

	return 0;
}