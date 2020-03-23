//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
////使用引用，避免拷贝构造
//class cpeople
//{
//public:
//	int b;
//	cpeople()
//	{
//		b = 12;
//	}
//};
//
//void fun(int a)		//abort（）的异常处理方式
//{
//	if (a == 0)
//	{
//		abort();
//	}
//	cout << "a" << a << endl;
//	
//}
//
//void fun1(int a)
//{
//	while (a < 10)
//	{
//		if (5 == a)
//		{
//			throw a;		//抛出一个数
//			//trow 12.12;   //抛出一个浮点数，对应下面的默认形式
//		}
//		a++;
//		//cout<<a<<endl;
//	}
//
//}
//
////使用引用和指针，避免拷贝构造
//void fun2(cpeople &c)
//{
//	while (c.b < 20)
//	{
//		if (15 == c.b)
//		{
//			throw c;		//抛出引用c
//			//throw &c;     //抛出地址c				
//		}
//		c.b++;
//		//cout<<a<<endl;
//	}
//}
//
//int main()
//{
//	//abort()异常函数的实现
//	fun(1);
//
//	////try catch异常的实现
//	try
//	{
//		fun1(2);
//	}
//	//catch (int b)
//	//{
//	//	cout << b << endl;
//	//}
//
//	//输出比5大的能继续运行
//	catch (int b)
//	{
//		try
//		{
//			fun1(b + 1);
//		}
//		catch (int a)
//		{
//		}
//	}
//
//	//当catch的类型没有写全，使用这种形式也可以操作
//	catch (...)		
//	{
//		cout << "default" << endl;
//	}
//
//	//抛出引用和指针
//	cpeople po;
//	try
//	{
//		fun2(po);
//	}
//	catch (cpeople& a)		//抛出引用
//	{
//	}
//	catch (cpeople *d)		//抛出地址
//	{
//		d->b++;
//	}
//
//
//	system("pause");
//	return 0;
//}