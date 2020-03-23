//#include <iostream>
//using namespace std;
//
////含纯虚函数的类是不能在主函数里直接生成对象
////但是子类继承含有纯虚函数的类，并且成员函数要一致。这样子类可以在主函数生成对象
////只要含有纯虚函数的就是抽象类（可以含有别的类型函数）
//class cfather
//{
//public:
//	virtual void fun() = 0;
//	void show()
//	{
//
//	}
//
//};
//
//////全都是纯虚函数和纯虚析构函数的叫做接口类
//////变量和构造函数是不能成为纯虚函数，故可以写在接口类里
////class cstu
////{
////public:
////	int a;
////	cstu()
////	{
////
////	}
////	virtual void fun() = 0;
////	virtual ~cstu() = 0;
////};
//
////子类也继承了父类的纯虚函数
//class cson :public cfather
//{
//public:
//	void fun()	//函数名要与父类的纯虚函数名一致，否则子类也无法在主函数里生成对象
//	{
//		cout << "cson\n";
//	}
//};
//
//int main()
//{
//	cson pf;
//	pf.fun();
//
//	system("pause");
//	return 0;
//
//}