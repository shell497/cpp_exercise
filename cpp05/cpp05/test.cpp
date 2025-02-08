#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
//class Date
//{
//public:
//    Date(int year = 1, int month = 1, int day = 1)
//    {
//        _year = year;
//        _month = month;
//        _day = day;
//    }
//    Date(const Date& d)
//    {
//        cout << " Date(const Date& d)" << endl;
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//    }
//  // d1 = d2;
//    Date& operator=(const Date& d)
//    {
//        _year = d._year;
//        _month = d._month;
//        _day = d._day;
//        return *this;
//    }
//    void Print()
//    {
//        cout << _year << "-" << _month << "-" << _day << endl;
//    }
//private:
//    int _year;
//    int _month;
//    int _day;
//};
//int main()
//{
//    Date d1(2024, 1, 21);
//    Date d2(2025, 1, 21);
//    Date d3(2026, 1, 21);
//    //d1 = d2;
//    d1.Print();
//    d2.Print();
//    d1 = d2 = d3;
//    return 0;
//}

typedef int STDataType;
class Stack
{
public:
    Stack(int n = 4)
    {
        _a = (STDataType*)malloc(sizeof(STDataType) * n);
        if (nullptr == _a)
        {
            perror("malloc申请空间失败");
                return;
        }
        _capacity = n;
        _top = 0;
    }
    Stack(const Stack& st)
    {
         _a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
        if (nullptr == _a)
        {
            perror("malloc申请空间失败!!!");
                return;
        }
        memcpy(_a, st._a, sizeof(STDataType) * st._top);
            _top = st._top;
        _capacity = st._capacity;
    }
    //d1=d2
    Stack& operator=(const Stack& st)
    {
        if (this != &st)
        {
            free(_a);
            _a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
            if (nullptr == _a)
            {
                perror("malloc申请空间失败!!!");
                return *this;
            }
            memcpy(_a, st._a, sizeof(STDataType) * st._top);
        }
        _top = st._top;
        _capacity = st._capacity;
        return *this;
    }
    void Push(STDataType x)
    {
        if (_top == _capacity)
        {
            int newcapacity = _capacity * 2;
            STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
                sizeof(STDataType));
            if (tmp == NULL)
            {
                perror("realloc fail");
                return;
            }
            _a = tmp;
            _capacity = newcapacity;
        }
        _a[_top++] = x;
    }
    ~Stack()
    {
        cout << "~Stack()" << endl;
        free(_a);
        _a = nullptr;
        _top = _capacity = 0;
    }
private:
    STDataType* _a;
    size_t _capacity;
    size_t _top;
};
int main()
{
    Stack st1(6);
    Stack st2(9);
    st1 = st2;
    return 0;
}