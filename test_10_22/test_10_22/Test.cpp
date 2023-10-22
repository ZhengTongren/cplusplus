#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//using namespace std;

//int main()
//{
//	int a = 10;
//	// 引用必须初始化
//	// int& b;
//	int& b = a;
//
//	int c = 20;
//	// 引用不可改变对象
//	// 一旦引用一个实体，就不可引用其他实体
//	b = c;
//
//
//	return 0;
//}


//int Count()
//{
//	int n = 0;
//	n++;
//	return n;
//}


//int& Count()
//{
//	int n = 0;
//	n++;
//	return n;
//}
//
//
//int main()
//{
//	//int ret = Count();
//
//	int& ret = Count();
//
//	cout << ret << endl;
//
//	cout << ret << endl;
//
//	Count();
//	cout << 
//
//	return 0;
//}


//int& Add(int x, int y)
//{
//	static int c;
//	c = x + y;
//	//c = x + y;
//
//	return c;
//}
//
//
//int main()
//{
//	int& ret = Add(1, 2);
//	cout << "Add(1, 2) = " << ret << endl;
//
//	Add(3, 4);
//	cout << "Add(1, 2) = " << ret << endl;
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//
//	int& b = a;
//
//	int* ptr = &a;
//	return 0;
//}


//#define Add(x, y) ((x) + (y))
//
//
//int main()
//{
//	int ret = Add(1, 2);
//
//	cout << ret << endl;
//	return 0;
//}

//
//int& Count()
//{
//	int n = 0;
//	n++;
//
//	return n;
//}
//
//
//int main()
//{
//	int& ret = Count();
//
//	cout << ret << endl;
//	cout << ret << endl;
//
//	return 0;
//}


//int main()
//{
//	int& a;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int& b = a;
//
//	int c = 20;
//
//	b = c;
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	const double& a1 = a;
//
//	return 0;
//}


//int& Count()
//{
//	static int n = 0;
//	n++;
//
//	return n;
//}
//
//
//int main()
//{
//	int ret = Count();
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//int count1()
//{
//    int n = 0;
//    n++;
//    return n;
//}
//
//int& count2()
//{
//    int n = 0;
//    n++;
//    return n;
//}
//
//int main()
//{
//    int ret1 = count1();
//    cout << ret1 << endl;
//
//    int ret2 = count2();
//    cout << ret2 << endl;
//
//    int& ret3 = count2();
//    cout << ret3 << endl;
//    cout << ret3 << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int& Add1(int a, int b)
//{
//    static int c = a + b;
//    return c;
//}
//
//int& Add2(int a, int b)
//{
//    static int c;
//    c = a + b;
//    return c;
//}
//
//int main()
//{
//    int& ret1 = Add1(1, 2);
//    cout << "Add1(1, 2) = " << ret1 << endl;
//    Add1(3, 4);
//    cout << "Add1(1, 2) = " << ret1 << endl << endl;
//
//    int& ret2 = Add2(1, 2);
//    cout << "Add2(1, 2) = " << ret2 << endl;
//    Add2(3, 4);
//    cout << "Add2(1, 2) = " << ret2 << endl << endl;
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//
//int count1()
//{
//    int n = 0;
//    n++;
//    return n;
//}
//
//int& count2()// 实际上是个错误程序
//{
//    int n = 0;
//    n++;
//    return n;
//}
//
//int& count3()
//{
//    static int n = 0;
//    n++;
//    return n;
//}
//
//int main()
//{
//    int ret1 = count1();
//    cout << ret1 << endl;
//
//    int ret2 = count2();
//    cout << ret2 << endl;
//
//    int& ret3 = count2();
//    // ret3是n的别名，count2函数栈帧销毁后，ret3/n 的值是不确定的
//    cout << ret3 << endl;
//    cout << ret3 << endl;
//
//    int& ret4 = count3();
//    cout << ret4 << endl;
//
//    return 0;
//}

#include <iostream>
using namespace std;


//int main()
//{
//	int a = 0;
//	auto b = &a;
//	auto* c = &a;
//
//
//	cout << b << endl;
//	cout << c << endl;
//
//	return 0;
//}


