#include <iostream>
#include "heat1.h"
using namespace std;


//heat1的代码如下：

//新建的头文件，包含函数声明，然后在别的文件中直接调用，就不用多次的函数声明，直接对函数定义就行，在定义时一定加上类名和作用域运算符cstu::  在另外的文件调用格式是：#include "heat1.h"  
//class cstu
//{
//public:
//	int age;
//	float f;
//	cstu(int a = 15, float b = 12.23f);		//如果这么声明，这里的第一个参数必须要有，第二个可以没有，如果赋值了就会把构造函数的初始化给覆盖了
//											//cstu(int a, float b);			//如果这么声明，后面的主函数传参两个参数都必须要有
//};



//有了自定义的头文件heat1后以下的类声明可以省略

//class cstu
//{
//public:
//	int age;
//	float f;

//	//构造函数在类内声明与定义的写法
//	cstu(int a = 12, float b = 12.23f)   //可以指定默认值
//	{
//		age = a;
//		f = b;
//	}
//
//	//构造函数在类内声明，在类外定义的写法。  普通函数也可以这么操作，记得要加类名和作用域运算符cstu::
//	 cstu(int a = 15, float b = 12.5f);
//};


//可直接使用类名和作用域运算符来定义构造函数
cstu::cstu(int a, float b)  //在函数定义时，里面的参数不用赋值
{
	age = a;
	f = b;
}

int main()
{
	cstu stu(12);  //构造函数参数传递，这里的第一个参数必须要有，第二个可以没有，如果赋值了就会把构造函数的初始化给覆盖了  如cstu stu(12,15.23);的输出是12  15.23

				   //cstu stu(12,15.56);		//对应的第二种声明的传参写法

	cstu*stu1 = new cstu(13, 13.5f);  //指针构造函数参数传递

	cout << stu.age << " " << stu.f << endl;

	cout << stu1->age << " " << stu1->f << endl;

	system("pause");
	return 0;
}