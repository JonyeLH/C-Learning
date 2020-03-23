#include <iostream>
using namespace std;

class cpeople		//基础类 父类
{
private:
	void fun1()
	{
		cout << "father fun1" << endl;
	}
protected:
	void fun2()
	{
		cout << "father protacted" << endl;
	}
public:

	void fun3()
	{
		cout << "father public" << endl;
	}
};

//public 继承之后，子类继承了父类的所有成员，父类的public成员在类内类外都能访问。
//但是父类的protected成员只能在子类的类内访问，在类外不能访问。
//父类的private成员子类在类内类外都不能访问，除非是子类友元。

//protected 继承之后，父类的public降级为protected 。
//就是被子类继承的父类public成员变成protected成员，被继承的父类protected成员和private成员还是原来的特性。

//private 继承之后，父类所有的成员都不能被子类调用
class cXM :public  cpeople		//派生类 子类
{
public:
	int a;
	void gotoschool()
	{
		cout << "gotoschool" << endl;
	}
	void fun4()
	{
		fun2();
	}

};


int main()
{
	cXM xm;
	xm.fun3();

	xm.fun4();


	system("pause");
	return 0;

}