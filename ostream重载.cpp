//#include <iostream>
//using namespace std;
//
//class cstu
//{
//
//private:
//
//	int nage;
//
//public:	cstu()
//	{
//		nage = 12;
//	}
//
//	friend ostream& operator <<(ostream& os, const cstu& st);
//
//};
//
////输出必须是在类外重载
//
////void operator <<(ostream& os,const cstu& st)	//不修改就要加上const
////{
////	os<<st.nage ;
////}
//
//ostream& operator <<(ostream& os, const cstu& st)
//{
//	os << st.nage;
//	return os;
//}
//
//int main()
//{
//	cstu st;
//	cout << st << endl;
//
//	system("pause");
//	return 0;
//}