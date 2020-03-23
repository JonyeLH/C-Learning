//#include <iostream>
////#include "heat1.h"
//using namespace std;
//
//class cstu
//{
//public:
//	int a;
//	float f;
//
//	//cstu() :a(12), f(12.23f)        //初始化列表    ！！！成员初始化顺序只与声明顺序有关，与初始化列表书写顺序无关
//	//{
//
//	//}
//
//	cstu(int b, float c) :a(b), f(c)    //通过参数传递对a和f进行初始化，这里或则可以只对其中的一个进行传递参数初始化：cstu(int b):a(b),f(12.23f)  后面就对b传参
//	{
//		//a=13;   里面如果再给a赋值就会覆盖a的初始化值
//	}
//	void show()
//	{
//		cout << a << " " << f << endl;
//	}
//};
//
//
//int main()
//{
//	//cstu stu;
//
//	cstu stu(15, 15.56);  //对应的参数传递对a和f初始化
//
//	stu.show();
//
//	system("pause");
//	return 0;
//}