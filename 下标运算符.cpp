//#include <iostream>
//using namespace std;
//
////[]的三种作用:声明变量的时候有[]，表示声明的是数组
////函数有[]表示指针
////地址+[]表示下标运算
//
//class cstu
//{
//public:
//	int a;
//	int b;
//	int c;
//	double d;
//	int nError;		//在这定义了错误返回的变量
//
//	cstu()
//	{
//		a = 12;
//		b = 23;
//		c = 34;
//		d = 45;
//		nError = -1;	//对错误返回变量进行赋值
//	}
//
//
//	//下表运算只能在类内声明定义
//	//在主函数里需要返回的是成员，所以在这要返回引用
//
//	//int& operator [](int n)		
//	//{
//	//	switch (n)
//	//	{
//	//	case 0:
//	//		return a;
//	//	case 1:
//	//		return b;
//	//	}
//	//	return nError;	//在返回的是引用变量，所以要返回错误变量nError
//	//}
//
//
//
//	//非整形的指针下标运算符 
//	void* operator [](int n)		//针对非整形的下表运算，使用指针取地址的方法
//	{
//		switch (n)
//		{
//		case 0:
//			return &a;
//		case 1:
//			return &d;
//		}
//		return &nError;
//	}
//
//};
//
//int main()
//{
//	int a[10] = { 1,2,3 };
//	a[1] = 13;		//在这就是下标运算对a[1]进行赋值，就是等价于 *(a+1)=13    可读写操作
//
//					//cstu st;		//st[1]是类中的第二个成员
//					//cout << st[1] << endl;		//读
//
//					//st[1] = 15;		//写
//					//cout << st[1] << endl;
//
//
//
//					//非整形的指针下标运算符 
//	cstu st;
//	cout << *(double *)st[1] << endl;		//void*使通用的类型转换  可以看成是中转站  void没有确定的大小，所以明确取double类型大小的空间内容  类型转换   
//	cout << *(int *)st[0] << endl;			//对int的取值操作
//
//											//指针的写 与读
//	*(double *)st[1] = 15;
//	cout << *(double *)st[1] << endl;
//
//	system("pause");
//	return 0;
//
//}