#include <iostream>
using namespace std;

//重写就是父类和子类相同，父类是虚函数
//虚是指函数成员
//子类重写的函数，默认是虚函数，可以显示加上vritual，或者不加	

class cfather
{
public:

	//inline virtual void show()	//这里加了inline可是对程序没什么作用，所以说虚函数不能是内联函数
	//virtual cfather ()		//虚函数也不能是构造函数,内联是构造函数的唯一合法存储类		

	virtual void show()
	{
		cout << "class cfather\n";
	}



	////重写函数的形式和返回值必须一致，除非是协变

	////在这重写的函数类型不一致的例子（cfather的show函数带参数）
	////cfather类的指针调用cson类的函数输出是class cfather，而不是class cson，故重写错误
	////子类的show（）函数也传参（int a），则输出是class cson，重写正确
	//virtual void show(int a)
	//{
	//	cout << "class cfather\n";
	//}

	////在这重写的函数是有返回值（int show）
	////在这是直接报出  返回类型与重写虚拟函数 "cfather::show" 的返回类型 "int" 既不相同，也不协变
	////在子类写成int show（），则输出正确。在子类的show函数中记得加上返回值：return 0;
	//virtual int show()
	//{
	//	cout << "class cfather\n";
	//	return 0;
	//}

	////协变的形式
	//virtual cfather& show()
	//{
	//	cout << "class cfather\n";
	//	return (*this);
	//}

};


class cson :public cfather
{
public:
	int a;

	void show()
	{
		cout << "class cson\n";

	}


	////子类的协变形式😂只有这样返回类型不一致，也能重写																																			
	// cson& show()
	//{
	//	cout << "class cson\n";
	//	return (*this);
	//}


};


//测试cson类重写了cfather之后，show（）函数有默认的virtual，在这也可以显示的加上virtual
class cgrandson :public cson
{
public:
	int a;
	void show()
	{
		cout << "class cgrandson\n";
	}
};



int main()
{
	cfather*fa = new cson;
	fa->show();		//普通的情况，前面没有virtual，那就是父类的指针去调用子类的空间，所以这里调用的结果只能是父类的show()函数

	//测试cson类的指针调用cgrandson类的函数
	//输出是class cgrandson
	cson *son = new cgrandson;
	son->show();

	system("pause");
	return 0;

}