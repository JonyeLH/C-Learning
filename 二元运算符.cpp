//#include <iostream>
//using namespace std;
//
//
////二元运算符是指运算符两端有两个操作数
////一元运算符是指运算符两端有一个操作数
////同理三元运算符是指运算符两端有三个操作数如  ？：
//class cstu
//{
//public:
//
//	int nage;
//	/*cstu()
//	{
//	nage = 10;
//	}*/
//
//	int operator >= (cstu& st2)		//类内运算符重载的形式   关系运算符 >=
//	{
//		return (nage >= st2.nage);
//	}
//
//};
//
////类外关系运算符重载>=   以及其他运算符重载
////int operator >=(cstu& stu1, cstu& stu2)
////{
////	return (stu1.nage >= stu2.nage);
////}
//
//int main()
//{
//	cstu stu1;
//	stu1.nage = 15;
//	cstu stu2;
//	stu2.nage = 20;
//
//	cout << (stu1 >= stu2) << endl;;
//
//
//	system("pause");
//	return 0;
//}