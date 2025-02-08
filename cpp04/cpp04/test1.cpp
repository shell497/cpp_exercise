#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//拷贝构造函数
//	Date(Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2025, 1, 20);
//	d1.Print();
//	Date d2(d1);
//	d2.Print();
//	return 0;
//}
//typedef int STDataType;
//class Stack
//{
//public:
//    Stack(int n = 4)
//    {
//        _a = (STDataType*)malloc(sizeof(STDataType) * n);
//        if (nullptr == _a)
//        {
//            perror("malloc申请空间失败");
//                return;
//        }
//        _capacity = n;
//        _top = 0;
//    }
//    Stack(Stack& st)
//    {
//        _a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
//        if (nullptr == _a)
//        {
//            perror("malloc申请空间失败");
//            return;
//        }
//        _capacity = st._capacity;
//        _top = st._top;
//    }
//    void Push(STDataType x)
//    {
//        if (_top == _capacity)
//        {
//            int newcapacity = _capacity * 2;
//            STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
//                sizeof(STDataType));
//            if (tmp == NULL)
//            {
//                perror("realloc fail");
//                return;
//            }
//            _a = tmp;
//            _capacity = newcapacity;
//        }
//        _a[_top++] = x;
//    }
//    ~Stack()
//    {
//        free(_a);
//        _a = nullptr;
//        _capacity = _top = 0;
//    }
//private:
//    STDataType* _a;
//    size_t _capacity;
//    size_t _top;
//};
//class queue
//{
//private:
//    Stack q1;
//    Stack q2;
//};
//int main()
//{
//    Stack st1(6);
//    st1.Push(1);
//    st1.Push(2);
//    st1.Push(3);
//    Stack st2(st1);
//    queue q;
//    queue c = q;
//    return 0;
//}
#include"Date.h"
int main()
{
	Date d1(2025,1,29);
	d1.Print();
	//Date d2(2025, 1, 20);
	//if (d1.operator<=(d2))
	//{
	//	cout << "真" << endl;
	//}
	//else
	//{
	//	cout << "假" << endl;
	//}
	//cout<<GetDay(2024, 2);
	Date d2(2025, 2, 20);
	d2.Print();
	//Date d3 = d2 + 40;
	//d3.Print();
	//d2 -= 60;
	//cout<<d2-d1;
	cout << d2<<d1;
	return 0;
}