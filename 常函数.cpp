//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//
//	int a;
//
//	//const 不能用于构造函数和析构函数
//	cstu()
//	{
//		a = 12;
//	}
//
//	~cstu()
//	{
//
//	}
//
//	//const的使用方法和使用位置
//	void show()const	//const cstu*	指针的const
//	{
//		// a = 13;		//常函数不能修改数据成员，可以输出数据成员int a
//
//		int b = 2;		//常函数可以修改内部的数据
//		b = a*b;
//
//		//this->a = 15;			错误的操作，this也不能修改数据成员
//
//		cout << b << " " << a << " I am show" << endl;
//	}
//
//	void fun()
//	{
//		cout << "i am fun" << endl;
//	}
//
//};
//
//
//
//int main()
//{
//	const cstu stu;		//这里构造了常对象stu，常对象只能调用常函数，不能调用普通函数
//	stu.show();
//	//stu.fun();		//这里常对象试图调用普通函数，是错误的操作
//
//	cstu stu1;			//普通对象可以调用常函数，也可以调用普通函数
//	stu1.show();
//	stu1.fun();
//
//
//	system("pause");
//	return 0;
//}