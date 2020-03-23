//#include <iostream>
//using namespace std;
//
//class cpeople        // 类的声明   构造了cpeople的一个类，就是在people前加上了一个c
//{
//public:             //在这要注明 访问修饰符:public private protected.如果没有注明就是默认为privated
//	int a;          //类里面就包括数据成员和下面的
//	void fun()      //函数成员
//	{
//		cout << "fun=" << a << endl;
//	}
//};                 //这里的花括号后面要加上分号！！
//
//int main()
//{
//	//这里构造的对象是要具有相同的属性（数据成员）和相同的行为（函数成员）    只有在构造对象的时候才会给对象分配空间，成员才会被分配空间，这和指针的一开始new的分配空间后才能调用是一个道理
//	cpeople op;     //在这是用cpeople这个类构造了op这个对象
//	cpeople op1;    //还可以构造许多个类
//	op.a = 12;      //调用数据成员
//	op.fun();      //调用函数成员
//
//	cpeople* op1 = new cpeople;    //用指针的方法构造一个对象，一定要分配空间
//	op1->a = 13;                  //指针调用数据成员
//	op1->fun();					  //指针调用函数成员
//	delete op1;                  //要注意记得释放new的空间
//
//	system("pause");
//	return 0;
//}