#define _CRT_SECURE_NO_WARNINGS 1
#include"stack.h"
void Stack::Init(int n)
{
	array = (int*)malloc(sizeof(int) * n);
	if (nullptr == array)
	{
		perror("malloc申请空间失败");
		return;
	}
	capacity = n;
	top = 0;
}