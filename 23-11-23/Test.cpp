#include <iostream>
using namespace std;

//int main()
//{
//	int* p1 = new int;
//	// 注意区分p2和p3
//	int* p2 = new int(10);// 对*p2进行初始化 10
//	int* p3 = new int[10];// p3 指向一块40个字节的int类型空间
//
//	int* p4 = new int[10]{ 1, 2, 3 };// 对p4所指空间进行初始化
//
//	delete p1, p2;// 释放空间
//	delete[] p3, p4;
//
//	return 0;
//}

//
//class Stack
//{
//public:
//	Stack(int capacity = 3)
//		:_top(0)
//		, _capacity(capacity)
//	{
//		cout << "Stack(int capacity = 3)" << endl;
//		_a = new int[capacity];
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		delete _a;
//		_top = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//
//int main()
//{
//	Stack* s1 = (Stack*)operator new(sizeof(Stack));
//	new(s1)Stack(2);
//
//	delete s1;
//	return 0;
//}


//int main()
//{
//	Stack* s1 = new Stack;
//	// new(s1)Stack(2);
//
//	delete s1;
//	return 0;
//}



//int main()
//{
//	Stack* s1 = new Stack[10];
//
//	delete[] s1;
//
//	return 0;
//}
//


//template <class T>
//void Swap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}


//int main()
//{
//	int a = 1, a2 = 2;
//	double b = 2.0;
//	Swap(a, a2);
//
//	Swap(a, (int)b);
//
//	return 0;
//}

//int Swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//double Swap(double& a, double& b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	double d1 = 1.2, d2 = 2.1;
//
//	Swap(a, b);
//	Swap(d1, d2);
//
//	return 0;
//}

//template <class T>
//T Add(const T x, const T y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a1 = 1, a2 = 2;
//	double d1 = 2.0, d2 = 1.2;
//
//	Add(a1, (int)d1);
//	Add <double>(a2, d2);
//
//	return 0;
//}

template <class T1>

class Stack
{
public:
	Stack(int capacity = 3)
		:_top(0)
		, _capacity(capacity)
	{
		cout << "Stack(int capacity = 3)" << endl;
		_a = new T1[capacity];
	}

	~Stack()
	{
		cout << "~Stack()" << endl;
		delete _a;
		_top = _capacity = 0;
	}
private:
	T1* _a;
	int _top;
	int _capacity;
};


int main()
{
	return 0;
}