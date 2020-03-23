//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//	int nage;
//
//	cstu()
//	{
//		nage = 12;
//	}
//
//	int operator +(int a)		//里面默认的第一个参数是this直接指向对象（可以不写），所以这就不用写成 (this->nage ,int a)  
//								//所以说当主函数是数字+类或者是类+类，类内运算符没法实现，只能在类外操作
//	{
//		return (nage + a);		//还可以写成return (this -> nage + a)
//	}
//};
//
//int main()
//{
//	cstu st;
//	cout << (st + 12) << endl;
//
//	system("pause");
//	return 0;
//}