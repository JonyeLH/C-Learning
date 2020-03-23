//#include <iostream>
//using namespace std;
//
//void fun(int a)
//{
//	cout << "1:" << a << endl;
//}
//void fun(int a, int b)
//{
//	cout << "2:" << a << " " << b << endl;
//}
//void fun(char c, float d)
//{
//	cout << "3:" << c << " " << d << endl;
//}
//
////void fun(int a)
////{
////	cout << "1:" << a << endl;
////}
////void fun(char b)
////{
////	cout << "2:" << b << endl;
////}
//void fun(float c)
//{
//	cout << "3:" << c << endl;
//}
//
//int main()
//{
//	//调用函数时，只要对相应的函数参数类型进行赋值就行，要一一对应
//	//fun(12);
//	//fun(15, 20);
//	fun('e', 12.23);  //这里的12.23后面一定要加上一个f，与前面的函数的参数类型要一致，因为计算机对小数的类型默认是double类型的,但是这里不加f也得到了结果,而在下面的例子中却必须加上f才有结果??
//
//
//	//函数的重载的好处，函数调用更加灵活
//	fun(12.44f);  //在这里的函数调用时，里面实参可以随意选择上面的函数参数类型，已达到调用目的
//
//	system("pause");
//	return 0;
//}