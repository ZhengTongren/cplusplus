//#include <stdio.h>

//namespace test
//{
//	int a = -1;
//
//	namespace test1
//	{
//		int rand = 10;
//	}
//
//	struct Node
//	{
//		int val;
//		int* next;
//	};
//
//	int Add(int x, int y)
//	{
//		return x + y;
//	}
//}
//
//
//int main()
//{
//	printf("%d\n", test::a);
//
//	struct test::Node node = { 10, NULL };
//	int sum = test::Add(10, 20);
//	printf("%d\n", sum);
//
//	printf("%p\n", &(test::test1::rand));
//	printf("%d\n", test::test1::rand);
//	return 0;
//}


#include "Stack.h"

// 命名空间

//
//using namespace std;
//using namespace st;
//// 展开不要轻易在项目中用
//
//
//int main()
//{
//	ST st;
//	STInit(&st);
//
//	STPush(&st, 10);
//	STPush(&st, 20);
//	STPush(&st, 30);
//	STPush(&st, 40);
//	return 0;
//}


#include <iostream>
// IO流

//int main()
//{
//	std::cout << "hello world\n";
//
//	int a = 10;
//	double b = 12.31;
//
//	// << 流插入
//	// 自动识别输出类型
//	std::cout << a << "\n" << b << "\n";
//	//std::cout << "\n";
//	//std::cout << b;
//	return 0;
//}

using std::cout;
using std::endl;
using std::cin;

//int main()
//{
//	int a;
//	double b;
//	// cin 流提取
//	cin >> a >> b;
//	cout << a << '\n' << b << "\n" << a << endl;
//	return 0;
//}


// 缺省参数
//void Func(int a = 0)
//{
//	cout << a << endl;
//}
//
//
//int main()
//{
//	Func();
//	Func(10);
//
//	return 0;
//}


using namespace st;

int main()
{
	ST s1;
	StackInit(&s1);
	StackPush(&s1, 10);
	StackPush(&s1, 20);
	StackPush(&s1, 30);
	StackPush(&s1, 40);

	ST s2;
	StackInit(&s2, 100);
	for (int i = 0; i < 100; i++)
	{
		StackPush(&s2, i);
	}

	return 0;
}