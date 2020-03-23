//#include <iostream>
//using namespace std;
//
//class cpeople          
//{
//	//访问修饰符    作用范围：从书写开始到下一个修饰符，或则到类的结尾的花括号
//public:             //类外可见   是整个程序公用的  在下面的class cbird类、自定义的函数和主函数内都是可用的    一般是将函数成员public
////private:			//类内可见   是所在类中私用的   如果不加public就是默认private    一般是将数据成员private
//	int a;         
//	void fun()      
//	{
//		cout << "fun=" << a << endl;
//	}
//};                
//
////public的类外可见可用
//class cbird
//{
//public:
//	cpeople op2;
//	void fun2()
//	{
//		op2.fun();
//	}
//};
//
//void fun()
//{
//	cpeople op1;
//	op1.fun();
//}
//
//int main()
//{	
//	cpeople op;         
//	op.fun();      
//
//	system("pause");
//	return 0;
//}