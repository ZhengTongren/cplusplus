#define _CRT_SECURE_NO_WARNINGS 1


#include "mktest.h"




//int main()
//{
//	cout << Add(1, 2) << endl;
//	return 0;
//}


//struct A
//{
//	long a1;
//	short a2;
//	int a3;
//	int* a4;
//};
//
//
//int main()
//{
//	cout << sizeof(struct A) << endl;
//
//	return 0;
//}


struct A
{
	int add(int x, int y)
	{
		return x + y;
	}
};


//int main()
//{
//	struct A A1;
//	cout << A1.add(1, 2) << endl;
//	return 0;
//}


//void Swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	Swap(a, b);
//	cout << a << endl << b << endl;
//	return 0;
//}


//void Func1()
//{
//	int a = 0;
//	cout << &a << endl << endl;
//}
//
//void Func2()
//{
//	int b = 0;
//	cout << &b << endl << endl;
//}
//
//
//void Func3()
//{
//	int c = 0;
//	int d = 0;
//	cout << &c << endl << &d << endl;
//}
//
//int main()
//{
//	Func1();
//	Func2();
//	Func3();
//	return 0;
//}


int& Count()
{
	int n = 0;
	n++;
	return n;
}


int main()
{
	int& ret = Count();
	cout << ret << endl;

	
	cout << ret << endl;


	return 0;
}