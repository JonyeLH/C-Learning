//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//	int nage;
//	cstu()
//	{
//		nage = 12;
//	}
//
//	//类内重载
//	//int operator++()			
//	//{
//	//	nage += 1;
//	//	return nage;
//	//}
//
//	//类内重载  this->的方法
//	//int operator--()		
//	//{
//	//	this->nage -= 1;
//	//	return nage;
//	//}
//};
////类外前置++
//int operator++(cstu& st)		//类外重载
//{
//	st.nage += 1;
//	return st.nage;
//}
////类外前置--
//int operator--(cstu& st)		//类外重载
//{
//	st.nage -= 1;
//	return st.nage;
//}
//
////类外后置++
//int operator ++(cstu& st, int n)		//int n是用来区分前向自加还是后向自加的标志
//{
//	int a = st.nage;		//用变量a记录自加前的值
//	st.nage += 1;			//nage自加
//	return a;				//返回自加前的值
//}
//
//int main()
//{
//	// int a=15;
//
//	cstu st;
//	//前置++   int b = ++a;     b=13   a=13
//	cout << ++st << endl;     //输出13
//	cout << --st << endl;		//输出12 
//
//								//后置++   int b = a++;    //b=12  a=13
//	cout << st++ << endl;		//这里输出12
//	cout << st.nage << endl;	//这里输出13
//
//	system("pause");
//	return 0;
//}