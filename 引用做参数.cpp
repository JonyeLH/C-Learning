//#include<iostream>
//using namespace std;
//
////引用做参数
//void fun(int &a)   //引用做参数，a接受b的赋值（a=b），a可以改变fun的内部值（a=new a）  a可以反过来改变外部b的值(b=new a)   （int &a）是形参
//{
//	a = 13;
//	cout << a << endl;
//}
//
//void fun1(int a)   //普通变量做参数 a接受b的赋值(a=b)，a可以改变fun1的内部值(a=new a)  但a没法改变外部b的值(b==b)  （int a）是形参
//{
//	a = 14;
//	cout << "fun1= " << a << endl;    //a=14
//}
//
//void fun2(int *a)   //指针做参数  b的地址传递给a指针的地址做初始化   函数的内部对*a进行地址的重新赋地址  也就是对b的地址做修改地址的操作 （int * a）是形参
//{
//	*a = 15;
//	cout << a << endl;
//}
//
//int main()
//{
//	int b = 12;
//	fun(b);     //b=12 带入fun 得a=12  然后a赋新值=13  所以输出a=13  故b=new a=13  
//	cout << b << endl;   //b=13
//
//	fun2(&b);
//	cout << b << endl;    //所以输出b=15
//
//	fun1(b);   //b=13带入fun1  的a=13  然后a=赋新值=14  所以输出a=14
//	cout << b << endl;    //b=15
//
//	system("pause");
//	return 0;
//}