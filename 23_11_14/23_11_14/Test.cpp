#include <iostream>
using namespace std;


class Date
{
public:
    Date(int year = 1, int month = 1, int day = 1)
    {
        _year = year;
        _month = month;
        _day = day;
    }

    // ¿½±´¹¹Ôìº¯Êý
    Date(const Date& d)
    {
        _year = d._year;
        _month = d._month;
        _day = d._day;
    }
private:
    int _year;
    int _month;
    int _day;
};

void Func(Date d)
{
    //...
}


int main()
{
    Date d1;
    Func(d1);


    return 0;
}