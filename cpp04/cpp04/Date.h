#pragma once
#include<iostream>
using namespace std;
class Date
{
public:
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
	Date(int year = 1, int month = 1, int day = 1);
	void Print();
	bool operator<(const Date& d)const;
	bool operator>(const Date& d)const;
	bool operator==(const Date& d)const;
	bool operator>=(const Date& d)const;
	bool operator<=(const Date& d)const;
	bool operator!=(const Date& d) const;
	// d1 += 
	Date& operator+=(int day);
	Date operator+(int day);

	// d1 -= 天数
	Date& operator-=(int day);
	// d1 - 100
	Date operator-(int day) const;
	// d1 - d2
	int operator-(const Date& d) const;
	// ++d1 -> d1.operator++();
	Date& operator++();
	// d1++ -> d1.operator++(0);
	Date operator++(int);
	Date& operator--();
	Date operator--(int);
private:
	int _year;
	int _month;
	int _day;
};
//可以得到每年每月日期的函数
int  GetDay(int year, int month);

ostream& operator<<(ostream& out, const Date& d);