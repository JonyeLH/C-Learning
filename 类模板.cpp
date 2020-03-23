#include<iostream>
using namespace std;

//除了类外，任何位置出现cfather都要加上模板参数列表（就是模板的通用形式，如：）,而且都要一致
//模板类的写法
//template <typename T=char>       //定义默认的char类型

//template <typename T=char，typename Y=int>	//参数的指定是从右向左，在主函数的传递时也要从右向左传
//template <typename T，typename Y=int>		//在这也可只给右边第一个类型指定类型

//类模板的作用域是在这个类的作用域，在类外如有需要使用到类模板，则需要重新加上类模板的声明
//template <typename T>
template <typename T = char, typename Y = int>
class cfather
{
public:
	T a;
	cfather(T t)
	{
		a = 10;	//赋值
	}
	//void fun()
	//{
	//	cout << a << endl;
	// } 

	//在这是fun函数在类内声明在类外定义，如下所示
	void fun();
};

template <typename T = char, typename Y = int>		//在上一条的类模板作用域之外，要重新加上类模板的声明
void cfather<T, Y>::fun()			//在这要加上类名的作用域运算符，a参数才可以被识别
{
	cout << a << endl;
}


//在C++11编译器函数模板可以使用参数默认值，之前的编译器不允许使用
template<typename T = char>
void fun(T t)
{

}

int main()
{
	//cfather<char> fa('a');	//如果类模板没有默认的类型，则在这里的cfather后加上对应所要传递的参数类型，也就是模板参数列表
	cfather<> fa('a');		//如果类模板有包含所要传递的参数类型，在cfather后的尖括号就不用传递类型了，也就是模板参数列表不需要传递

							//cfather<int,char> fa(13，'a');	//多类型时，类型传递从右向左
							//cfather<int> fa(13);		//也可只转递一个类型

							//cfather<int, char> fa(12);		//模板参数列表<int,char>，给构造函数传参可以只传递一个参数
	fa.fun();

	cfather<int, char>* pf = new cfather<int, char>(12);		//（12）是构造函数传参
	pf->fun();

	system("pause");
	return 0;
}