//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
////private:
//	int nage;
//	double height;
//
//public:
//	cstu()
//	{
//		nage = 12;
//		height = 165.1;
//	}
//	void show()
//	{
//		cout << nage << " " << height << endl;
//	}
//
////	int operator =( int a)		//单个赋值运算符必须是类内的
////{
////		nage = a;
////		return a;
//
//
//
//	/* int& operator +=( int a)
//	{
//		nage = nage + a;
//		return (nage);
//	}*/
//
//	//friend int operator +=(cstu& st1, int a);
//
//};
//	
//	//无返回形式
//void operator +=(cstu& st, int a)
//{
//	st.nage = st.nage + a;
//}
//
//	//返回成员
//	/*int& operator +=(cstu& st1, int a)
//	{
//		st1.nage = st1.nage + a;
//		return (st1.nage );
//	}*/
//
//	//返回对象
//	/*cstu& operator +=(cstu& st1, int a)
//	{
//		st1.nage = st1.nage + a;
//		return (st1);
//	}*/
//
//int main()
//{
//	cstu st;
//	int a = 115;
//	int b;
//	st += a+=200;		//连算
//
//	cout << st.nage;		//无返回类型
//
//	system("pause");
//	return 0;
//}