
//int main()
//{
//	int _a = 1;
//
//}


#include <iostream>
using namespace std;
#include <stdlib.h>

//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(Date& dd)
//	{
//		_year = dd._year;
//		_month = dd._month;
//		_day = dd._day;
//	}
//
//	void Print()
//	{
//		cout << _year << " " << _month << " " << _day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//void Func1(Date d)
//{
//	d.Print();
//}
//
//int main()
//{
//	Date d1(2023, 1, 1);
//	Func1(d1);
//	// Date d2(d1);
//	return 0;
//}


class Stack
{
public:
	Stack(int capacity = 3)
	{
		_a = (int*)malloc(sizeof(int) * capacity);
		if (nullptr == _a)
		{
			perror("malloc");
			exit(-1);
		}
		_top = 0;
		_capacity = capacity;
	}

	Stack(const Stack& st)
	{
		_a = (int*)malloc(sizeof(int) * st._capacity);
		if (_a == nullptr)
		{
			perror("malloc");
			exit(-1);
		}
		memcpy(_a, st._a, sizeof(int) * st._top);
		_capacity = st._capacity;
		_top = st._top;
	}

	~Stack()
	{
		free(_a);
		_top = _capacity = 0;
		_a = nullptr;
	}

private:
	int* _a;
	int _top;
	int _capacity;
};


void Func(Stack st)
{
	//...
	
}


int main()
{
	Stack st1;

	Func(st1);
	return 0;
}


//class Date
//{
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};


//class Date
//{
//public:
//    Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//    // ¿½±´¹¹Ôìº¯Êı
//    Date(const Date d)
//    {
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//
//int main()
//{
//    Date d1;
//    Date d2(d1);
//
//    return 0;
//}