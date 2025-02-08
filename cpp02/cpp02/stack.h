#pragma once
#include<iostream>
using namespace std;
class Stack
{
public:
		void Init(int n = 4);
private:
	    int* array;
	    size_t capacity;
	    size_t top;
};