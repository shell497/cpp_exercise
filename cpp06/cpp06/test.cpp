#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n)//int n=4
//	{
//		cout << "Stack(int n = 4)" << endl;
//
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//	
//	// st2(st1)
//	Stack(const Stack& st)
//	{
//		// 需要对_a指向资源创建同样大的资源再拷贝值
//		_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//		memcpy(_a, st._a, sizeof(STDataType) * st._top);
//		_top = st._top;
//		_capacity = st._capacity;
//	}
//
//	// st1 = st3
//	// st1 = st1;
//	Stack& operator=(const Stack& st)
//	{
//		if (this != &st)
//		{
//			free(_a);
//			_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
//			if (nullptr == _a)
//			{
//				perror("malloc申请空间失败!!!");
//				return *this;
//			}
//			memcpy(_a, st._a, sizeof(STDataType) * st._top);
//			_top = st._top;
//			_capacity = st._capacity;
//		}
//
//		return *this;
//	}
//
//	void Push(STDataType x)
//	{
//		if (_top == _capacity)
//		{
//			int newcapacity = _capacity * 2;
//			STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
//				sizeof(STDataType));
//			if (tmp == NULL)
//			{
//				perror("realloc fail");
//				return;
//			}
//			_a = tmp;
//			_capacity = newcapacity;
//		}
//		_a[_top++] = x;
//	}
//
//	void Pop()
//	{
//		_a[_top - 1] = -1;
//		--_top;
//	}
//
//	int Top()
//	{
//		return _a[_top - 1];
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		//_a = nullptr;
//		//_top = _capacity = 0;
//	}
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//
//class myqueue
//{
//public:
//	myqueue()//初始化列表是每个成员变量定义初始化的地⽅。
//		/*:st1(n)
//		,st2(n)
//		,_size(20)
//		,a(_size)
//		,x(5)
//		,st3(n)*/
//	{ }
//private://
//	Stack st1=1000;
//	Stack st2= 1000;
//	int _size=20;
//	/*引⽤成员变量，const成员变量，没有默认构造的类类型变量，必须放在初始化列表位置进⾏初始
//	化，否则会编译报错*/
//	int& a=_size;
//	const int x=5;
//	Stack st3=200;
//};
//
//
//int main()
//{
//	//myqueue会调用Stack的默认构造函数(类自己生成的默认构造；我们写的无参的构造函数；我们写的全缺省函数)
//	myqueue q;/*Stack的默认构造函数如果没有缺省值时（或想改变初始值时），
//	myqueue就无法调用Stack的默认构造函数，只能自己写自己的构造函数*/
//	return 0;
//}

//class A
//{
//public:
//	// // 构造函数explicit就不再⽀持隐式类型转换
//	 A(int a)//内置类型隐式类型转换为类类型对象，需要有相关内置类型为参数的//构造函数
//		:aa1(a)
//		,aa2(a)
//	{
//
//	}
//	void print()
//	{
//		cout << aa1 << " " << aa2 << endl;
//	}
//private:
//	int aa1;
//	int aa2;
//};
//int main()
//{
//	//拷贝构造---A aa3=（A aa4(1)）=1转化的零时变量
//	A aa3=1;
//	aa3.print();
//}
