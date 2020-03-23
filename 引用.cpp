//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//变量起别名
//	int a = 12;  //引用声明时必须初始化
//	int &b = a;  //声明a的一个引用 b，b是a的一个别名
//	int &c = a;  //一个变量可以多个引用
//
//	cout << &a << " " << &b << " " << &c << endl;   //同一个变量的不同引用的地址是相同的
//
//	int &d = b;  //一个引用可以被另外的量引用
//
//	//int f = 15;
//	//int &b = f;    //b不能引用别的变量
//
//	//b = 13;   //可以对引用赋值，变量也会跟着赋值 
//	cout << d<< " "<<d <<endl;
//
//	system("pause");
//	return 0;
//
//}