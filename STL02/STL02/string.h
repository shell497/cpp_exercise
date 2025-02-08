#pragma once
#include<iostream>
#include<assert.h>
#include<string.h>

namespace ldw
{
	//template<class T>
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;
		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str+_size;
		}
		const_iterator begin()const
		{
			return _str;
		}

		const_iterator end()const
		{
			return _str + _size;
		}

		string(const char* str = "");
		string(size_t n, char ch);
	private:
		char* _str;
		size_t _capacity;
		size_t _size;
    };

}
