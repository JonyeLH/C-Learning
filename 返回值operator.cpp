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
////void operator +(cstu& st, int a)		//这里的operator就是表示重载运算，后面接什么运算符就是表示哪种运算符重载。和函数重载一样，在主函数相应的运算要与前面定义运算符重载的类型和顺序一致
////{
////	cout << st.nage + a << endl;
////}
//
//void operator +(int a, cstu& st)		//这里的operator就是表示重载运算，后面接什么运算符就是表示哪种运算符重载。和函数重载一样，在主函数相应的运算要与前面定义运算符重载的类型和顺序一致
//{
//	cout << st.nage + a << endl;
//}
//
//int operator +(cstu& st, int a)		//这里是有返回值的
//{
//	return (st.nage + a);
//}
//
//cstu& operator +(cstu& st, cstu& st1)		//这里是两个对象的运算，所以返回值是类的类型cstu
//											//其次因为作为返回值，return会调用拷贝构造函数，所以在这传递引用，就可避免调用
//{
//	st1.nage += st.nage;
//	return st1;
//}
//
//int main()
//{
//	cstu st1,
//		st2;
//
//	20 + st2;
//
//	//连算时前两个按照运算符重载计算完之后，需要有返回值与第三个数进行计算
//	cout << (st1 + 15 + 13) << endl;
//	cout << (st1 + st2) + 23 << endl;
//
//	system("pause");
//	return 0;
//}