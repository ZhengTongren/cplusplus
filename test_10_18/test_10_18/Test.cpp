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


//int* Func(int& y)
//{
//	return &y;
//}
//
//int main()
//{
//	int a = 10;
//	int c = 20;
//	int* p = &a;
//	cout << "p = " << p << endl;
//	p = Func(c);
//	cout << "&c = " << &c << endl;
//	cout << "p = " << p << endl;
//
//	return 0;
//}


// ȱʡ�������������أ������ԭ�������ã��������֣�

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

// ��������ͬ �����Ĳ��������ͣ�������˳�򣩲�ͬ
void Swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}


//int main()
//{
//	int a = 10, b = 20;
//
//	Swap(&a, &b);
//	cout << "a = " << a << endl << "b = " << b << endl << endl;
//
//	Swap(a, b);
//	cout << "a = " << a << endl << "b = " << b << endl << endl;
//
//
//	return 0;
//}


//void f(int x, char y)
//{
//	cout << "f(int x, char y)" << endl;
//}
//
//
//void f(char x, int y)
//{
//	cout << "f(char x, int y)" << endl;
//}
//
//
//int main()
//{
//	f(1, 'x');
//	f('y', 2);
//	return 0;
//}


// error // ��������
//void f()
//{
//	cout << "f()" << endl;
//}
//
//
//void f(int a = 0)
//{
//	cout << "f(int a)" << endl;
//}


//int main()
//{
//	int a = 10;
//	f();
//
//	return 0;
//}


