#include<iostream>
using namespace std;

//模板的思想：泛型编程思想。使用一个函数体，实现多个功能
//函数模板如下，T是通用的类型。这样就可以传递多个类型的变量
//在这可以写成template<class T> class与typename相同
//template<typename T>
//void fun(T a)
//{
//	cout << a << endl;
//}

////可以写多个通用的类型
//template<typename T, typename Y>
//template<typename T, class Y>		//typename和class可以同时使用
//void fun(T a,Y b)
//{
//	cout << a <<" "<< b << endl;
//}



struct node
{
	int a;
	double b;
};

template<typename T>
void fun(T a)
{
 	cout << a << endl;
}

//函数模板具体化     
//函数的具体化：就是针对特殊问题，把特殊的模板具体写一遍,优于模板。普通函数最先执行
//template<>void fun <node>(node no)
//{
//	cout << no.a << " " << no.b << endl;
//}
//template<>void fun<int>(int no)
//{
//	cout << no<< endl;
//}

//void fun(int a)
//{
//
//}

//函数模板实例化
//就是在这生成指定函数的定义
template void fun<int>(int a);

int main()
{
	//模板函数的调用
	//fun(12.12);

	//模板函数具体化的调用
	//node no = { 12, 12.12 };
	//fun(no);

	//模板函数实例化的调用
	//fun(12);

	system("pause");
	return 0;
}


////之前的要写多个函数
//void fun(int a)
//{
//	cout << a << endl;
//}
//void fun(double d)
//{
//	cout << d << endl;
//}
