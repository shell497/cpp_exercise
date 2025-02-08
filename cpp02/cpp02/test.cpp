#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Date
{
public:
	//void Init(Date* const this, int year,int month, int day)
	void Init(int year, int month, int day)
	{
		this->_year = year;
		this->_month = month;
		this->_day = day;
	}

	void print()
	{
		cout << _year<<_month<<_day;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	/*Date d1;
	d1.Init(2025, 1, 16);
	d1.print();*/
	/*int a = 10;
	 const int& b = a;
	 b = 10;*/
	/*const int a = 10;
	const int& b = a;*/
	return 0;
}