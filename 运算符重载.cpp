//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//	int nage;
//	double dscore;
//
//	cstu()
//	{
//		nage = 12;
//		dscore = 12.12;
//	}
//};
//
//
////这里的operator就是重载运算的限定词，后面接什么运算符就是表示哪种运算符重载。
////和函数重载一样，在主函数相应的运算要与前面定义运算符重载的类型和顺序一致。
////在括号内第一个参数可以是传对象，最好使用传引用或者指针（避免调用拷贝构造函数）这里的对象不用和主函数声明的对象一致
////第二个参数可以是运算符操作的另外一个参数
//void operator +(cstu& st, int a)
//{
//	cout << st.nage + a << endl;		//在输出时把两个部分进行运算操作
//}
//
//void operator +(int a, cstu& st)		//这里括号里的参两个数可以互换位置
//{
//	cout << st.nage + a << endl;
//}
//
//
//void operator +(cstu& st1, cstu& st2)		//这里括号里的参两个数可以互换位置
//{
//	cout << st1.nage + st2.nage << endl;
//}
//
//
//int main()
//{
//	//普通的+运算符
//	//	int a = 13;
//	//	a = 13;
//
//
//	//运算符重载的应用：两个对象直接运算操作系统会报错，或者是对象直接与数据做运算也是会报错
//	//故使用运算符重载去解决问题，如上所示
//	cstu st1,			//连续声明两个对象1和对象2，之间用逗号 , 分开   最好分行书写
//		st2;
//
//	st1 + 15;			//对象与整数的运算
//	15 + st1;
//
//	st1 + st2;		//可以进行两个对象的运算
//
//	system("pause");
//	return 0;
//}