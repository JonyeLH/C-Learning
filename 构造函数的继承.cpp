//#include <iostream>
//using namespace std;
//
//class cpeople		//基础类 父类
//{
//public:
//	cpeople()
//	{
//		cout << "cpeople" << endl;
//	}
//};
//
//
//class cXM :public  cpeople		//派生类 子类
//{
//public:
//	cXM()
//	{
//		cout << "cXM" << endl;
//	}
//
//};
//
//class cXH :public  cXM 		//派生类 子类
//{
//public:
//	cXH()
//	{
//		cout << "cXH" << endl;
//	}
//
//};
//
//int main()
//{
//	//构造函数继承的调用顺序是先调用父类的构造函数，然后是调用子类构造函数
//	cXM xm;
//	cXH xh;
//
//	system("pause");
//	return 0;
//
//}