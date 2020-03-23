#include <iostream>
using namespace std;

class cstu
{

private:
	//static int a;

public:

	static int a;		//静态函数参数不能在类内初始化，可以在类外初始化

	static const int b = 15;	//在C++11之前的版本（C++98/C++03）只有 静态常量整型 数据成员才能在类中初始化
	int b = 15;					//在C++11之后的版本是允许初始化的

	static void fun()	//静态成员函数的使用
	{
		cout << "i am static" << endl;
		a = 20;
		cout << a << endl;
		//	b = 25;			//静态成员函数不能使用普通的数据成员，只能使用静态的成员函数
	}

	cstu()//:a(2)		//这里是无法给静态函数进行初始化的
	{
		a = 12;			//重新给a进行赋值   假如这里没有赋值，那么在输出a的值就会将静态成员函数的a的值输出
	}
};

int cstu::a = 13;		//静态函数在类外初始化


int main()
{
	// 这里可以使用类名作用域来调用静态成员函数和静态函数，说明静态成员函数和静态函数是在类创建的时候申请空间的
	cout << cstu::a << endl;
	cstu::fun();

	//这里也可以使用生成对象的方式来调用静态成员和静态函数
	cstu stu;
	//stu.a;
	cout << stu.a << endl;
	stu.fun();

	system("pause");
	return 0;
}