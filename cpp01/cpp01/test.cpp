#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include"stack.h"
//namespace gaozhong
//{
//	namespace ldw
//	{
//		int rand = 10;
//
//		int add(int a, int b)
//		{
//			return a + b;
//		}
//
//		struct Node
//		{
//			struct Node* next;
//		}ST;
//	}
//
//	namespace dmj
//	{
//		int rand = 10;
//
//		int add(int a, int b)
//		{
//			return a + b;
//		}
//
//		struct Node
//		{
//			struct Node* next;
//		}ST;
//	}
//}
//using gaozhong::ldw::add;
//int main()
//{
//	cout << rand << endl;
//	cout << gaozhong::ldw::rand << endl;
//	cout << gaozhong::ldw::add(15, 25) << endl;
//	cout << bit::add(10, 20, 50) << endl;
//	return 0;
//}

int func(int a)
{
	cout << "func(int a)" << endl;
	return 0;
}
int func(int* a)
{
	cout << "func(int* a)" << endl;
	return 0;
}
int main()
{
	func(NULL);
	//func((void*)0);
	func(nullptr);//
	return 0;
}