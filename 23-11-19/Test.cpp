#include <iostream>
using namespace std;

//class Date
//{
//public:
//	explicit Date(int year = 2023, int month = 1, int day = 1)
//		:_year(year)
//		,_month(month)
//		,_day(day)
//	{}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//
//int main()
//{
//	Date d1 = 1;
//
//	return 0;
//}


//class A
//{
//public:
//	static int GetCount_top()
//	{
//		_top++;
//		return _top;
//	}
//
//	A()
//		:_a1(1)
//	{
//	}
//
//private:
//	int _a1;
//	static int _top;
//};
//
//int A::_top = 0;
//
//int main()
//{
//	A a1;
//	cout << a1._top << endl;
//
//	return 0;
//}

//int main()
//{
//	A a1;
//	cout << a1.GetCount_top() << endl;
//	cout << A::GetCount_top() << endl;
//
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//	void Print();
//	friend ostream& operator<<(ostream& out, const Date& d);
//	friend istream& operator>>(istream& in, Date& d);
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//ostream& operator<<(ostream& out, const Date& d)
//{
//	out << d._year << "-" << d._month << "-" << d._day;
//	return out;
//}
//
//istream& operator>>(istream& in, Date& d)
//{
//	in >> d._year >> d._month >> d._day;
//	return in;
//}istream& operator>>(istream& in, Date& d);
//


//class A
//{
//public:
//	A()
//		:_a(1)
//	{}
//	friend class B;
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B()
//		:_b(1)
//	{
//		A a1;
//	}
//
//private:
//	int _b;
//};
//
//int main()
//{
//	B b1;
//	return 0;
//}


//class Stack
//{
//public:
//	Stack()
//		:_a(nullptr)
//	{
//		cout << "Stack()" << endl;
//	}
//
//	Stack(const Stack& st)
//	{
//		cout << "Stack(const Stack& st)" << endl;
//	}
//
//	Stack& operator=(const Stack& st)
//	{
//		cout << "Stack& operator=(const Stack& st)" << endl;
//		if (this != &st)
//		{
//			_a = st._a
//		}
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//	}
//
//private:
//	int* _a;
//};
//
//
//int main()
//{
//
//}


class A
{
public:
	A(int aa1 = 1)
		:_a(aa1)
	{
		cout << "A()" << endl;
	}

	A(const A& aa)
		:_a(aa._a)
	{
		cout << "A(const A& aa)" << endl;
	}

	A& operator=(const A& aa)
	{
		cout << "A& operator=(const A& aa)" << endl;
		if (this != &aa)
		{
			_a = aa._a;
		}
		return *this;
	}

	~A()
	{
		cout << "~A()" << endl;
	}

private:
	int _a;
};


void f1(A aa)
{

}


A f2()
{
	A a1;
	return a1;
}


int main()
{
	A a2 = f2();
	return 0;
}


//int main()
//{
//	f1(A(1));
//	return 0;
//}


//int main()
//{
//	f1(1);
//
//	return 0;
//}


//int main()
//{
//	A a1;
//	f1(a1);
//	cout << endl;
//
//	f2();
//	cout << endl;
//	return 0;
//}