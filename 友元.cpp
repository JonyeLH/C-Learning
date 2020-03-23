//#include <iostream>
//using namespace std;
//
//class cstu
//{
//private:      //访问修饰符具有封装性，权限
////protected：   这里是protected也可以
//	int age;
//	void fun()
//	{
//		age = 12;
//		cout << "age=" << age << endl;
//	}
//
//
////使用接口函数，也能达到从外面访问private的内容
//public:
//	int Get()
//	{
//		return age;
//	}
//	void set()	
//	{
//		age = 15;
//	}
//
//	friend void fun1();   //友元   类成员对于这个函数相当于public   直接是：friend+函数声明
//	friend int main();    //这里也可以直接对主函数进行友元
//	friend class cteach;  //还可以对其他类进行友元
//};
//
//void fun1()
//{
//	cstu stu;
//	stu.fun();
//}
//
//class cteach 
//{
//public:
//	cstu stu2;
//	void fun2()
//	{
//		stu2.fun();
//	}
//};
//
//int main()
//{
////  fun1();   //调用自定义函数，从而访问类的private和protected的内容
//
////	cstu stu;  //主函数也可以访问private和protected的内容
////	stu.fun();
//
////	cteach teach;   //构造老师的类，访问学生类的private或protected的内容
//	//teach.fun2();
//
//	cstu stu1;     //构造stu1这个对象
//	stu1.set();    
//	int a = stu1.Get();
//	cout << a << endl;
//
//	system("pause");
//	return 0;
//}