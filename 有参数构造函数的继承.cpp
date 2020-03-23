#include <iostream>
using namespace std;

class cgrandfather		//祖父类
{
public:
	cgrandfather(int a, int b)
	{
		cout << "i am grandfather" << endl;
	}
	cgrandfather(int c)
	{

	}
};

class cfather : public cgrandfather	//基础类 父类
{
public:
	cfather(int a) : cgrandfather(1, 2)		//父类对祖父类进行了继承，所以要对其参数初始化，但下面的子类不能对祖父类进行参数初始化
	{										//基类有多个构造函数，通过子类的初始化列表的形式选择性对应去调用那个父类的构造函数
		cout << "i am fatherclass" << endl;
	}
};


class cson :public  cfather	//派生类 子类
{
public:
	int a;
	cson() :cfather(1)		//父类的构造函数有参数的时候，要在子类构造函数的初始化列表进行初始化传参
	{						//谁继承，谁对其父类进行参数初始化
		cout << "cXM" << endl;
	}

};



int main()
{
	cfather father(1);
	cson son;

	system("pause");
	return 0;

}