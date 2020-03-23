//#include <iostream>
//using namespace std;
//
//class cstu
//{
//
//public:
//
//	cstu()
//	{
//				 
//	}
//	cstu(const cstu&a)		//拷贝构造函数的形式和使用方法，本质是构造函数，参数是本类的常数引用
//	{
//
//	}
//};
//
//int main()
//{
//	//几种现有对象给新的对象赋值，走拷贝构造函数的情况
//	cstu st1;				  //1、一个对象给新的对象初始化，走拷贝构造函数
//	cstu stnew(st1);
//
//	cstu stnew1 = st1;		  //2、 新的对象给现有对象进行赋值，走拷贝构造函数
//
//	cstu stnew2 = cstu(st1);  //3、临时对象给现有对象进行赋值，走拷贝构造函数
//
//	cstu*stnew3 = new cstu(st1);	//4、对指针的操作，走拷贝构造函数 
//
//	system("pause");
//	return 0;
//}