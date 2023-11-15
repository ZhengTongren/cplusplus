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



	void Print() const
	{
		cout << _year << " " << _month << " " << _day << endl;
	}

	Date* operator&()
	{
		return this;
	}

	const Date* operator&() const
	{
		return this;
	}
	

private:
	int _year;
	int _month;
	int _day;
};


//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//
//
//class B
//{
//public:
//	B(int d = 1)
//		:_a1(1)
//		,_b(d)
//		,_b2(2)
//	{}
//private:
//	A _a1;
//	int& _b;
//	const int _b2;
//};





//int main()
//{
//	/*const Date d1(2023, 1, 1);
//	d1.Print();*/
//
//
//	return 0;
//}


//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		,_a2(_a1)
//	{}
//private:
//	int _a2;
//	int _a1;
//};
//
//
//int main()
//{
//	A a(1);
//
//	return 0;
//}


