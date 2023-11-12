
//int main()
//{
//	int _a = 1;
//
//}


#include <iostream>
using namespace std;


class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date(Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	void Print()
	{
		cout << _year << " " << _month << " " << _day;
	}

private:
	int _year;
	int _month;
	int _day;
};


void Func1(Date d)
{
	d.Print();
}

int main()
{
	Date d1(2023, 1, 1);
	Func1(d1);
	// Date d2(d1);
	return 0;
}