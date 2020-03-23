//#include<iostream>
//using namespace std;
//
//template<typename T=char,typename Y=int>
//class cfather
//{
//public:
//	T a;
//	//cfather()		//父类构造函数无参数 
//	cfather(T t)
//	{
//		a = t;
//	}
//	void show()
//	{
//		cout << "show" << endl;
//	}
//};
//
////子类没有模板
////class cson:public cfather<int,char>			//在这的cfather后面必须加上模板初始化列表
////{
////public:
////	//cson()		//父类的构造函数无参数子类的构造函数写法
////	cson():cfather<int,char>(12)	//父类的构造函数是含参数的，所以在子类构造函数的初始化列表去传参。在这里的cfather不用加模板初始化列表，加了可以
////	{
////
////	}
////};
//
//template<typename T , typename Y >			//在这没有指定的类型，所以在子类的构造函数里可以随意传递类型
//class cson :public cfather<T, Y>			//在这的cfather后面必须加上模板初始化列表
//{
//public:
//	//cson()		//父类的构造函数无参数子类的构造函数写法
//	cson():cfather<T, Y>(12)	//父类的构造函数是含参数的，所以在子类构造函数的初始化列表去传参。在这里的cfather不用加模板初始化列表，加了可以
//	{
//
//	}
//};
//
//int main()
//{
//	////子类没有模板，向父类的模板传递类型
//	//cson so; 
//
//	//子类是模板，向父类的模板传递类型
//	cson<int ,char> so;
//	so.show();
//
//	system("pause");
//	return 0;
//
//}