//#include<iostream>
//using namespace std;
//
//class cstu
//{
//public:
//	int nage;
//	cstu(int age)
//	{
//		nage = age;
//	}
//
//	//重载类内的写法（默认有this指针）
//	int operator -()
//	{
//		return (-nage);
//	}
//};
////	// 重载类外的写法   不能与类内的定义重载了  
////int operator -(cstu& dt)
////{
////	return (-dt.nage);
////}
//
//int main()
//{
//	cstu st1(14);
//	cout << -st1 << endl;		//在这需要对 - 进行重载 
//
//	system("pause");
//	return 0;
//}