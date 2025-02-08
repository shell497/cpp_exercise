#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
//class Date
//{
//public:
//	//无参构造函数
//	/*Date()
//	{
//		_year = 2025;
//		_month = 1;
//		_day = 19;
//	}*/
//	//全缺省构造函数,两者会产生冲突，不能同时存在
//	Date(int year = 2025, int month = 1, int day = 19)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void print()
//	{
//		cout << _year << "/" << _month << "/" << _day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2023,9,8);
//	d1.print();
//	return 0;
//}
//对于⾃定义类型成员变量，要求调⽤这个成员变量的默认构造函数初始化。如class/struct等，但是指针并不是
//typedef  int DateType;
//class stack
//{
//public:
//	stack(int n=4)//这里必须要有实际值方可调用
//	{
//		a = (DateType*)malloc(sizeof(DateType) * n);
//		if (nullptr == a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		capacity = n;
//		top = 0;
//	}
//private:
//	DateType* a;//数组
//	DateType top;//栈顶指针
//	DateType capacity;//数组当前容量
//};
//
//class queue
//{
//private:
//	stack q1;
//	stack q2;
//};
//int main()
//{
//	queue q;
//	return 0;
//}
///////////////////////////////////////////////////////////////////////
//C++规定对象在销毁时会⾃动调⽤析构函数，完成对
//象中资源的清理释放⼯作。如int*；
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
	~Stack()
	{
		cout << "~Stack()" << endl;
		free(_a);
		_a = nullptr;
		_capacity = _top = 0;
	}
private:
	STDataType* _a;
	size_t _capacity;
	size_t _top;
};

class MyQueue
{
public:
	~MyQueue()
	{
		cout << "~MyQueue" << endl;
	}
private:
	Stack pushst;
	Stack popst;
};
int main()
{
	Stack st;
	MyQueue mq;
	return 0;
}