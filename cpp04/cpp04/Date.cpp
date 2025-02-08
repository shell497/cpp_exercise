#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"
Date::Date(int year,int month, int day)
{
	_year = year;
    _month = month;
	_day = day;
}
void Date::Print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

bool Date::operator<(const Date& d)const
{
	if (_year < d._year)
	{
		return true;
	}
	else if (_year == d._year && _month < d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month)
	{
		return _day < d._day;
	}
	return false;
}
bool Date::operator>(const Date& d)const
{
	return !operator<(d)&&!operator==(d);
}
bool Date::operator==(const Date& d)const
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator>=(const Date& d)const
{
	//return !operator<(d);
	return !this->operator<(d);
}

bool Date::operator<=(const Date& d)const
{
	return !this->operator>(d);
}

int  GetDay(int year, int month)
{
	static int mday[13] = { -1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	//润年
	if (month == 2 && (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 29;
	}
	//平年
	return mday[month];
}
//a=a+b
Date& Date::operator+=(int day)
{
	_day += day;
	if (GetDay(_year, _month) >= _day)
	{
		return *this;
	}
	else
	{
		while (GetDay(_year, _month) < _day)
		{
			if (_month == 12)
			{
				_day = _day - GetDay(_year, _month);
				++_year;
				_month = 1;
				return *this;
			}
			_day = _day - GetDay(_year, _month);
			++_month;
		}
		return *this;
	}
}
//d2+10
Date Date::operator+(int day)
{
	Date tmp (*this);
	tmp += day;
	return tmp;
}

Date& Date::operator-=(int day)
{
	_day -= day;
	if (_day > 0)
		return *this;
	else 
	{
		while (_day <= 0)
		{
			--_month;//1 0 
			if (_month == 0)
			{
				--_year;//2024
				_month = 12;//12
			}
			_day = _day + GetDay(_year, _month);//-9
		}
		return *this;
	}
}

Date Date::operator-(int day) const
{
	Date tmp(*this);
	tmp -= day;
	return tmp;
}


bool Date::operator!=(const Date& d) const
{
	return !(_year == d._year
		&& _month == d._month
		&& _day == d._day);
}
// d1 - d2
int Date::operator-(const Date& d) const
{
	int flag = 1;
	Date max = *this;
	Date min = d;
	if (*this<d)
	{
		max = d;
		min = *this;
		flag = -1;
	}

	int n = 0;
	while (min != max)
	{
		++min;
		++n;
	}

	return n * flag;
}

Date& Date::operator++()
{
	*this += 1;
	return *this;
}

Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;

	return tmp;
}

Date& Date::operator--()
{
	*this -= 1;
	return *this;
}
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;

	return tmp;
}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;
	return out;
}

istream& operator>>(istream& in, Date& d)
{
	cout << "请输入你的日期!" << endl;
	in >> d._year >> d._month >> d._day;
	return in;
}