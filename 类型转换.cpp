//#include <iostream>
//using namespace std;
//
//class cfather
//{
//public:
//	int a;
//	virtual void fun()
//	{
//
//	 }
//};
//
//class cson :public cfather
//{
//public:
//	int b;
//	void fun()
//	{
//
//	}
//};
//
//class cother
//{
//public:
//	double f;
//};
//
//int main()
//{
//	cfather *p;
//	cson *s;
//	cother *o;
//
//	//static_cast的类型转换，可用于不同关系的类的转换
//	p=(cfather *)s;		//旧式强制转换
//	p = static_cast<cfather *>(s);		//新式的强制转换
//
//	//新型强制转换不允许两个不相关的类强制转换，如下把s强制转换成cother类，是错误的
//	//o = static_cast<cother *>(s);
//
//	//但是使用旧式的强制类型转换时，编译不会报错。
//	//但是会将a和b都转换成double类型，后面的调用时就会出现不清楚的情况，如下所示
//	//o= (cother *)s;
//
//
//	////reinterpret_cast的类型转换，用于天生危险的类型转换
//	//o = reinterpret_cast<cother*>(s);
//	//struct dat
//	//{
//	//	short a;
//	//	short b;
//	//};
//	//long value = 0xA224B118;
//	////struct结构体里含有两个二字节的short类型的变量，所以整个结构体是四字节
//	////而long类型也是四字节，将long的value转换成结构体的dat*类型，则是将long的value拆分成两个二字节
//	//dat* p1 = reinterpret_cast<dat*>(value);
//	//cout << hex << p->a;
//
//
//
//	////dynamic_cast的类型转换，多用于有继承关系的两个类之间的转换
//	//p = dynamic_cast<cfather*>(s);	//将子类转换成父类
//	//s = dynamic_cast<cson*>(p);		//将父类转换成子类，要求必须是多态的条件下
//	//cson*s1 = dynamic_cast<cson*>(s);	//自己转换成自己的类
//
//
//
//	////const_cast的类型转换
//	//const cfather* p;
//	//cson* so;
//	//cfather* p1 = const_cast<cfather*>(p);	//将const cfather* p的const去掉之后的cfather* p的类型转换
//	////cson* p1=const<cson*>(p);		//在这去掉const之后任然是cfather* 的类型，故在这使用cson*的类型转换是无效的
//	////so=(cson*)p;		//在这使用旧式的强制类型转换系统是不会报错的，但是也是会存在错误的
//
//
//
//	system("pause");
//	return 0;
//}
//
