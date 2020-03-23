//#include<iostream>
//using namespace std;
//
////联编就是相当于函数调用的过程，分为静态联编和动态联编
////一般来说都是静态联编(在编译期系统就能知道的函数的调用)
////动态联编（在运行的时候系统才知道调用的函数）用于多态的特殊条件下
//class CA
//{
//public:
//	virtual void fun()
//	{
//		cout << "CA" << endl;
//	}
//};
//void fun1()
//{
//	cout << "CA" << endl;
//}
//
//
//class CB :public CA
//{
//public:
//	void fun()
//	{
//		cout << "CB" << endl;
//	}
//};
//
//
//int main()
//{
//	//普通的静态联编
//	CA fa;
//	fa.fun();
//	fun1();
//
//
//	//多态的动态联编
//	CA*a ;
//	int b;
//	cin >> b;
//	switch(b)
//	{
//	case 1: a = new CA; break;
//	case 2: a = new CB; break;
//	}
//	a->fun();
//
//	system("pause");
//	return 0;
//}