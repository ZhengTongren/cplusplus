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
//	// 静态成员变量受访问限定符限制
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
//	// 静态成员变量受访问限定符限制
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
//	cout << "i = " << i << endl;//对比参照项1
//	cout << "j = " << j << endl;//对比参照项2
//}
//

class A
{
public:
	A()
	{
		cout << "A()" << endl;
		++count;
	}

	A(const A& a)
	{
		cout << "A(const A& a)" << endl;
		++count;
	}

	~A()
	{
		cout << "~A()" << endl;
	}

	static int GetCount()
	{
		return count;
	}

private:
	static int count;
	// 静态成员变量受访问限定符限制
};

int A::count = 0;

A Func()
{
	A aa;
	return aa;
}

int main()
{
	
	
	Func();	
	//cout << A::count << endl; // 受访问限定符限制
	cout << A::GetCount() << endl;

	return 0;
}

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
//	// 静态成员函数，特点：没有this指针
//	static int GetCount()
//	{
//		return count;
//	}
//
//private:
//	// 声明
//	static int count;
//};
//
//// 定义
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