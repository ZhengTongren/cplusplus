#include <iostream>
using namespace std;


//
//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//		++_count;
//	}
//	A(const A& a)
//	{
//		cout << "A(const A& a)" << endl;
//		++_count;	
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//
//	int GetCount()
//	{
//		return _count;
//	}
//	
//
////private:
//	// static int _count;
//	int _count;
//	// ��̬��Ա�����ܷ����޶�������
//};
//
//
//
//A Func(A a)
//{
//	A aa = a;
//	return aa;
//}
//
//
//int main()
//{
//	A a1;
//	Func(a1);
//
//	cout << A::GetCount() << endl;
//	return 0;
//}




//
//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//		++_count;
//	}
//	A(const A& a)
//	{
//		cout << "A(const A& a)" << endl;
//		++_count;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//
//	static int GetCount()
//	{
//		return _count;
//	}
//
//private:
//	static int _count;
//	// ��̬��Ա�����ܷ����޶�������
//};
//
//int A::_count = 0;
//
//A Func(A a)
//{
//	A aa = a;
//	return aa;
//}
//
//
//int main()
//{
//	A a1;
//	Func(a1);
//
//	cout << A::GetCount() << endl;
//	return 0;
//}

//#include <conio.h>

//
//class test
//{
//public:
//	static int i;
//	test() {}
//	void print();
//private:
//	static int j;
//};
//
//int test::i = 0;
//int test::j = 0;
//
//void test::print()
//{
//	cout << "i = " << i << endl;//�ԱȲ�����1
//	cout << "j = " << j << endl;//�ԱȲ�����2
//}
//

//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//		++count;
//	}
//
//	A(const A& a)
//	{
//		cout << "A(const A& a)" << endl;
//		++count;
//	}
//
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//
//	static int GetCount()
//	{
//		return count;
//	}
//
//private:
//	static int count;
//	// ��̬��Ա�����ܷ����޶�������
//};
//
//int A::count = 0;
//
//A Func()
//{
//	A aa;
//	return aa;
//}
//
//int main()
//{
//	
//	
//	Func();	
//	//cout << A::count << endl; // �ܷ����޶�������
//	cout << A::GetCount() << endl;
//
//	return 0;
//}

///////////////////////////////

//class A
//{
//public:
//	A() 
//	{
//		++count; 
//	}
//
//	A(const A& t) 
//	{
//		++count; 
//	}
//
//	~A() 
//	{
//		cout << "~A()" << endl;
//	}
//
//	// ��̬��Ա�������ص㣺û��thisָ��
//	static int GetCount()
//	{
//		return count;
//	}
//
//private:
//	// ����
//	static int count;
//};
//
//// ����
//int A::count = 0;
//
//A func()
//{
//	A aa;
//	return aa;
//}
//
//int main()
//{
//
//	func();
//	func();
//	func();
//
//	cout << A::GetCount() << endl;
//	return 0;
//}


//////////////////
//
//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//		++count;
//	}
//
//	A(const A& a)
//	{
//		cout << "A(const A& a)" << endl;
//		++count;
//	}
//
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//
//	static int GetCount()
//	{
//		return count;
//	}
//
//private:
//	static int count;
//	// ��̬��Ա�����ܷ����޶�������
//};
//
//int A::count = 0;
//
//A Func()
//{
//	A aa;
//	return aa;
//}
//
//int main()
//{
//
//
//	Func();
//	//cout << A::count << endl; // �ܷ����޶�������
//	cout << A::GetCount() << endl;
//
//	return 0;
//}

//
//class Date
//{
//public:
//	explicit Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(int* p)
//	{}
//
//	void Print()
//	{
//		cout << _year << " " << _month << " " << _day << endl;
//	}
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
//	//Date d1 = 3;
//	//d1.Print();
//	Date d2 = nullptr;
//
//
//	return 0;
//}


//class A
//{
//public:
//	A(int a)
//	//explicit A(int a)
//		:_a(a)
//	{}
//
//	A(int* p)
//	{}
//
//	int _a = 0;
//};
//
//int main()
//{
//	/*A aa1(1);
//	A aa2(2);*/
//
//	/*A aa3 = 3;
//	const A& ra = 3;*/
//
//	int* p = NULL;
//	A aa4 = p;
//	return 0;
//}




//
//class A
//{
//public:
//	A(int a1 = 1)
//		:_a(a1)
//	{}
//	friend struct B;
//private:
//	int _a;
//};
//
//
//class B
//{
//public:
//	void Func()
//	{
//		A aa;
//		cout << aa._a << endl;
//	}
//
//private:
//	/*A _a1*/
//	int _b;
//};
//
//
//int main()
//{
//	B b;
//	b.Func();
//
//	return 0;
//}


class A
{
public:
	A(int a = 1)
		:_a(a)
	{
		cout << "A()" << endl;
	}

	A(const A& aa)
		:_a(aa._a)
	{
		cout << "const A& aa" << endl;
	}

	A& operator=(const A& aa)
	{
		cout << "A& operator=(const A& aa)" << endl;
		if (this != &aa)
		{
			_a = aa._a;
		}
	}

	~A()
	{
		cout << "~A()" << endl;
	}

private:
	int _a;
};

void f1(A aa)
{}

A f2()
{
	A a22;
	return a22;
}

int main()
{
	/*A a(1);
	f1(a);
	cout << endl;*/

	//f1(A()); // ��һ�����ʽ�У�����+�������졪��>����

	/*A a21;
	a21 = f2();*/ // ��ֵ����

	//A a2 = f2(); // ��һ�����ʽ�У���������+�������졪��>��������
	f1(1);// ��ʽ����ת��������+�������졪��>����

	return 0;
}