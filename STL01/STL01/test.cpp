#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

auto add(int a, int b)
{
	return a + b;
}
void Test01()
{
	//准确来说auto的作用是帮我们自动识别类型,避免类型名过长带来不便,需要有传入值
	//auto e这样是错误的
	//auto不能直接用来声明数组
	int a = 10;
	auto b = 10;
	auto c = 'a';
	auto d = &a;
	auto* e = &a;
	auto& f = a;
	//auto不能作为函数的参数，可以做返回值，但是建议谨慎使用

	cout << typeid(b).name() << endl;
	cout << typeid(c).name() << endl;
	cout << typeid(d).name() << endl;
	cout << typeid(e).name() << endl;
	cout << typeid(f).name() << endl;
}
void Test02()
{
	int array[] = { 1, 2, 3, 4, 5 };
	// C++98的遍历
	//for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
	//{
	//	array[i] *= 2;
	//}
	//for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
	//{
	//	cout << array[i] << endl;
	//}
	//传引用返回可以修改
	for (auto& e : array)
	{
		e *= 2;
	}
	for (const auto& e : array)
	{
		cout << e << endl;
	}
}
#include<string>
#include<assert.h>
namespace bit
{
	class string
	{
	public:
		auto& operator[](size_t pos)
		{
			assert(pos < _size);//0<pos<_size
			return _str[pos];
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}
void Test03()
{
	//string-construction
	//string();
	string s1;
	//string(const char*str)
	string s2("hello world!");
	//string (const string& str, size_t pos, size_t len = npos);
	string s3(s2, 6);
	//string (const string& str);
	string s4(s2);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	// 1、下标+[]=运算符重载
	for (size_t i = 0; i < s2.size(); i++)
	{
		s2[i] += 1;
		//s2.operator[](i) += 1;
	}
	for (size_t i = 0; i < s2.size(); i++)
	{
		cout << s2[i] << " ";
	}
	cout << endl;

}
void Test04()
{
	string s1;
	string s2("hello world");
	string s3(s2);
	//string s4(s2, 6, 1000);
	string s4(s2, 6);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	//string s5("hellow world!");
	const string s5("hellow world!");
	//迭代器
	string::const_iterator it = s5.begin();
	while (it != s5.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
	//反向迭代器
	//string::const_reverse_iterator rt = s5.rbegin();
	auto rt= s5.rbegin();
	while (rt != s5.rend())
	{
		cout << *rt;
		++rt;
	}
	cout << endl;
}
//Capacity
void Test05()
{
	string s1("ldwdsg");
	//均不包括"/0"
	cout << s1.size()<<endl;
	cout << s1.length()<<endl;
	cout << s1.max_size() << endl;
	cout << s1.capacity() << endl;
	/*s1.clear();
	cout << s1 << s1.size() << s1.capacity() << endl;*/
	cout << s1[0]<<endl;
	cout << s1.at(0) << endl;
	cout << s1[9] << endl;
	cout << s1.at(9) << endl;
}
//Modifiers:
void Test06()
{
	string s1;
	s1.push_back('x');
	s1.push_back('y');
	s1.push_back('z');
	cout << s1 << endl;
	//s1.append(" ldwdsg",3);
	string s2("hellow");
	s1.append(s2.begin()+2,s2.end());
	cout << s1 << endl;

	string s3;
	s3 += 'c';
	cout << s3 << endl;
	s3 += " ldwdws";
	cout << s3 << endl;
	s3 += s2;
	cout << s3 << endl;
}

void Test07()
{
	string s1 = "ldwdsg";
	cout << s1 << endl;
	///*s1.resize(10,'c');*/
	////s1.resize(3);
	////cout << s1<<endl;
	//cout<<s1.capacity();
	////n<capacity,capacity不改变
	//s1.reserve(9);
	//cout << s1.capacity()<<endl;
	string s2 = "lsllsl";
	s1.append(" ldwdsg");
	s1.append(s2);
	cout << s1 << endl;

}
// 利用reserve提高插入数据的效率，避免增容带来的开销
//====================================================================================
void TestPushBack()
{
	string s;
	s.reserve(100);
	size_t sz = s.capacity();
	cout << "making s grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}
int main()
{
	//Test01();
	Test07();
	//TestPushBack();
	return 0;
}