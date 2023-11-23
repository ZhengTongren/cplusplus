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


