// #include <iostream>

//class Date
//{
//public:
//    //Date() // 1. 无参构造函数
//    //{
//    //    _year = 1;
//    //    _month = 1;
//    //    _day = 1;
//    //}
//
//    //Date(int year, int month, int day) // 2. 带参构造函数
//    //{
//    //    _year = year;
//    //    _month = month;
//    //    _day = day;
//    //}
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//

//int main()
//{
//    Date d1; // 调用无参构造函数
//    Date d2(2013, 2, 22); // 调用带参构造函数
//    Date d3();
//    return 0;
//}


//class Date
//{
//public:
//    //Date() // 1. 无参构造函数
//    //{
//    //    _year = 1;
//    //    _month = 1;
//    //    _day = 1;
//    //}
//
//    //Date(int year, int month, int day) // 2. 带参构造函数
//    //{
//    //    _year = year;
//    //    _month = month;
//    //    _day = day;
//    //}
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//
//int main()
//{
//    Date d1;
//    return 0;
//}


//class Date
//{
//public:
//    Date()
//    {
//        _year = _month = _day = 2;
//    }
//
//    Date(int year = 1, int month = 1, int day = 1) 
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//
//int main()
//{
//    Date d1;
//    return 0;
//}


#include <iostream>
using namespace std;

class Stack
{
public:
    Stack(int capacity = 3)
    {
        _a = (int*)malloc(sizeof(int) * capacity);
        if (nullptr == _a)
        {
            perror("malloc");
        }
        _capacity = capacity;
        _top = 0;
    }

    ~Stack()
    {
        free(_a);
        _top = _capacity = 0;
        _a = nullptr;
    }

private:
    int* _a;
    int _capacity;
    int _top;
};

int main()
{
    Stack st1;

    return 0;
}