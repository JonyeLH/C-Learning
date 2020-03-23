//#include <iostream>
//using namespace std;
//
//class cpeople		//基础类 父类
//{
//public:
//
//	void study()
//	{
//		cout << "study" << endl;
//	}
//};
//
////多个子类可以继承同一个父类
//class cchild :public cpeople		//派生类 子类
//{
//public:
//	void gotoschool()
//	{
//		cout << "gotoschool" << endl;
//	}
//
//};
//
//class cadlt :public cpeople		//派生类 子类
//{
//public:
//	void gotowork()
//	{
//		cout << "gotowork" << endl;
//	}
//
//};
//
//class colder :public cpeople	//派生类 子类
//{
//public:
//	void gotopark()
//	{
//		cout << "gotopark" << endl;
//	}
//};
//
//int main()
//{
//	//子类生成的对象可以直接调用父类的成员
//	cchild child;
//	child.study();
//
//	//指针的调用方法
//	cchild * child1 = new cchild;
//	child1->study();
//
//	system("pause");
//	return 0;
//
//}