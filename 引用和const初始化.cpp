//#include <iostream>
////#include "heat1.h"
//using namespace std;
//
//class cstu
//{
//public:
//	int b;
//	int& a;
//	const int e;
//
//	//cstu() :a(b), b(12)			  //成员初始化
//	//{
//	//	cout << a << " " << b << endl;
//	//}
//
//
//	//cstu(int c) : a(b), b(c)	      //参数初始化
//	//{
//	//	cout << a << "\t" << b << endl;
//	//}
//
//
//	//cstu(int& c) : a(c), b(c),e(c)	  //类外初始化
//	//{
//	//	cout << a << " " << b << " " << e << endl;
//	//}
//
//	cstu(int& c, int f) : a(c), b(c), e(f)	  //类外初始化
//	{
//		cout << a << " " << b << " " << e << endl;
//	}
//
//	//void show()
//	//{
//	//	cout << a << " " << b << " " << e << endl;
//	//}
//};
//
//int main()
//{
//	//cstu stu;				//引用成员
//	//cstu stu();
//
//	//cstu stu(13);			//引用参数
//
//	//int d = 14;				//引用类外
//	//cstu stu(d);  
//
//	int d = 14;			//多个构造函数，参数对应的相应的构造函数
//	cstu stu(d, 16);
//
//	/*stu.show();*/
//
//	system("pause");
//	return 0;
//}