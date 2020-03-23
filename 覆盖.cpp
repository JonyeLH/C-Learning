//#include <iostream>
//using namespace std;
//
//
////子类有与父类相同的成员时，在主函数调用成员时会默认调用子类的成员,故覆盖了父类的成员
//class cfather
//{
//public:
//	int a;
//	cfather()
//	{
//		a = 12;
//	}
//	int fun(int a)
//	{
//		cout << "cfather fun\n";
//		return 0;
//	}
//
//};
//
//class cson :public cfather		//如果这里不写继承的限定词，那就是默认为private
//{
//public:
//	int a;
//	cson()
//	{
//		a = 10;
//	}
//	void fun()
//	{
//		//输出成员变量
//		cout << a << endl;
//		cout << cfather::a << endl;		//解决方法是使用类名作用域的方法去调用父类的成员，如cfather::a  cfather::fun(1)
//										//输出成员函数
//		cout << "cson fun" << endl;
//		cout << cfather::fun(1) << endl;
//	}
//};
//
//
//
//int main()
//{
//	cson so;
//	so.fun();
//
//	//so.fun(1);	//在父类中fun是有参数的，但是在子类继承中会覆盖父类的成员，所以在这调用含参数是错误的
//	so.cfather::fun(1);
//
//
//
//	system("pause");
//	return 0;
//
//}