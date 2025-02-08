#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void test01()
{
	int* ptr1 = new int;
	int* ptr2 = new int(10);
	int* ptr3 = new int[10];
	int* ptr4 = new int[10] {1, 2, 3, 4, 5};
	delete ptr1;
	delete ptr2;
	delete[] ptr3;
	delete[] ptr4;
}
class Test
{
public:
	//
	Test()
		:_date(0)
	{
		cout << "Test()" << endl;
	}
	~Test()
	{
		cout << "~Test()" << endl;
	}
private:
	int _date;
};
void test02()
{
	//malloc只开空间，new既开空间又调用构造函数初始化。
	Test* ptr1 = (Test*)malloc(sizeof(Test));
	Test* ptr2 = new Test;
	free(ptr1);
	delete ptr2;
}
struct ListNode
{
public:
	ListNode(int _val=0)
		:next(nullptr)
		,val(_val)
	{

	}
private:
	ListNode* next;
	int val;
};
void test03()
{
	//在我们先前学习的链表中，C语言为了创建一个节点并将其初始化,
	//需要单独封装一个函数进行初始化，我C++只需要用new即可开空间+初始化
	ListNode* ptr1 = new ListNode(10);
}
template<class T1,class T2>
T1 swap(T1 a, T2 b)
{
	return a + b;
}
void test04()
{
	cout << swap(10, 30.1) << endl;
}
int main()
{
	test04();
	return 0;
}
