#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>

using namespace std;
//
//
//void Func(int a, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//
//int main()
//{
//	Func(1);
//	Func(1, 2);
//	Func(1, 2, 3);
//	return 0;
//}


int* Func(int& y)
{
	return &y;
}

int main()
{
	int a = 10;
	int c = 20;
	int* p = &a;
	cout << "p = " << p << endl;
	p = Func(c);
	cout << "&c = " << &c << endl;
	cout << "p = " << p << endl;

	return 0;
}