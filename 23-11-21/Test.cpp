#include <iostream>
using namespace std;


//class Count
//{
//    friend class Solution;
//public:
//    static int GetCount()
//    {
//        _count++;
//        return _count;
//    }
//private:
//    static int _count;
//};
//
//int Count::_count = 0;
//
//class Solution {
//public:
//    int Sum_Solution(int n) {
//        int sum = 0;
//
//        for (int i = 0; i < n; i++)
//        {
//            sum += Count::GetCount();
//        }
//
//        return sum;
//    }
//};


//struct ListNode
//{
//	int _val;
//	ListNode* _next;
//
//	ListNode(int x = 0)
//		:_val(x)
//		,_next(nullptr)
//	{}
//};
//
//
//int main()
//{
//	ListNode* p1 = new ListNode[3]{ ListNode(1), ListNode(2), ListNode(3) };
//	ListNode* p2 = new ListNode[3]{ 2, 2, 3 };
//
//	delete p1;
//	delete p2;
//
//	return 0;
//}


//int globalVar = 1;
//static int staticGlobalVar = 1;
//
// 
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	
//	free(ptr1);
//	
//}


//int main()
//{
//	int* p1 = new int;
//	int* p2 = new int(10);
//	int* p3 = new int[10];
//	int* p4 = new int[10]{ 1, 2, 3 };
//
//	delete p1, p2, p3, p4;
//
//	return 0;
//}