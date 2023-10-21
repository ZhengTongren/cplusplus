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