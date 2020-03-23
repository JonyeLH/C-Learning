#include<iostream>
using namespace std;

template<typename T>
class cA
{
public:
	int a;

};

template<typename T , typename Y >
class cfather
{
public:
	cfather(cA<char>& a)
	{

	}
	void fun()
	{
		cout << "cfather" << endl;
	}
};

int main()
{
	cA<char> ca;
	cfather <int, cA<char>>pf(ca);

	system("pause");
	return 0;
}