#include <iostream>
using namespace std;

//虚函数，就是父类对子类的调用
//多态思想，父类的指针调用子类的函数
//父类对子类的调用，必须是父类和子类有一样的成员
class cfather
{
public:
	virtual void show()		//虚函数的写法  在这里加了virtual，那在主函数的指针调用就可以调用到子类的show函数
	{						//这里的调用必须是父类和子类的函数成员名字一样都为show（）
		cout << "class cfather\n";
	}
};

class cson :public cfather
{
public:
	int a;
	void show()
	{
		cout << "class cson\n";
	}
};

class cson1 :public cfather
{
public:
	int a;
	void show()
	{
		cout << "class cson1\n";
	}
};

int main()
{
	//父类对子类的调用   只能使用父类的指针调用子类的函数
	cfather*fa = new cson;		//指针调用子类谁的成员，是要看指针指向谁的空间。在这时cson申请了空间，故fa指针指向cson的show（）
	fa->show();		//普通的情况（对象调用），前面没有virtual，这里调用的结果只能是子类对父类继承的show()函数

	cfather*fa1 = new cson1;	//在这是cson1申请了空间，故fa指针指向cson1的show（）
	fa1->show();

	//子类对父类的继承
	cfather fa2;   //父类的函数前有virtual 可是使用对象调用时，任然是调用子类对父类继承的show()函数
	fa2.show();

	system("pause");
	return 0;

}