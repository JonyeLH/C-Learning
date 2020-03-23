//#include <iostream>
//using namespace std;
//
//class Cout
//{
//public:
//	int a;
//	
//	//Cout()
//	Cout():in (this)		//在外部类的构造函数给内部类的对象传递指针
//	{
//		a = 12;
//	}
//
////内部类的创建  也是嵌套类
//public:
//	class Cin			
//	{
//	public:
//		int b;
//
//		Cout *p;
//		Cin(Cout *pf):p(pf)
//		{
//			b = 13;
//		}
//		void fun()		
//		{
//			//cout << a << endl;		//内部类不能直接使用外部类的成员
//			//Cout ou;					//可以使用外部类的对象来调用成员
//			//cout << ou.a << endl;	
//
//			cout << p->a << endl;
//		}
//	};
//
//	//在外部类生成一个内部类的对象
//public:
//	Cin in;
//};
//
//
//int main()
//{
//	//主函数里调用内部类的fun函数
//	//在外部类里用内部类生成一个对象，在主函数里通过如下调用
//	Cout oi;		
//	oi.a = 15;
//	oi.in.fun();
//
//	system("pause");
//	return 0;
//}