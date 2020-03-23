#include <iostream>
//using namespace std;
//
////三种访问修饰符的作用
////private：    纯私有  类内使用
////protected：  受保护  类内和子类可以使用
////public：     公有的  都可以使用
//
//class cpeople
//{
//private:
//	int a;
//protected:       //受保护  类内和子类可以使用    				
//	void fun()
//	{
//		cout << "fun=" << a << endl;
//	}
//};
//
////子类对父类的继承，就可以对protected进行访问
//class cxm :public cpeople
//{
//public:
//	void fun4()
//	{
//		fun();
//	}
//};
//
//
////非子类的类调用protected是错误的
////class cbird
////{
////public:
////	cpeople op2;
////	void fun2()
////	{
////		op2.fun();
////	}
////};
//
////类外调用protected是错误的
////void fun()
////{
////	cpeople op1;
////	op1.fun();
////}
//
//int main()
//{
//	cpeople op;
//	//op.fun();		//类外调用protected的函数是错误的
//
//	cxm op1;		//子类调用是允许的
//	op1.fun4();
//
//	system("pause");
//	return 0;
//}