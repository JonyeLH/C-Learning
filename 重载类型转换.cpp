//#include <iostream>
//using namespace std;
//
////对象的强制转换要求
////没有显示返回类型，但是要写返回值
////没有参数
////必须定义成类的成员函数
////不应该改变对象的内容，所以是const函数
//class cstu
//{
//public:
//	int a;
//	double b;
//	cstu()
//	{
//		a = 13;
//		b = 12.12;
//	}
//
//	operator int() const		//对象的类型转换形式， 不修改值，就加上const
//	{
//		return a;
//	}
//
//	operator double() const		//类型转换形式，没有返回类型，但是有返回值  必须放在类内
//	{
//		return b;
//	}
//
//};
//
//int main()
//{
//	//(int)a 或者 a(int)  数值的两种类型转换的形式：前者是c语言中的写法，后者是C++的写法
//	float a = 12.12f;
//	cout << (int)a << endl;
//
//	//对象的类型的转换，推荐使用第一种
//	cstu st;
//	cout << (int)st << endl;
//	cout << (double)st << endl;
//
//	system("pause");
//	return 0;
//}