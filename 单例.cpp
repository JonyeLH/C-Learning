////#include <iostream>
//using namespace std;
//
////单例的思想是在外部的主函数里，类只生成一个对象
////当类内的构造函数是private或则protected时，主函数就无法使用类生成对象了，就限制了对象的生成
////类中的非静态成员，在类外的主函数里必须用对象去调用。
////静态成员函数，既可以使用对象去调用，也可以用类名作用域去调用
//class cfather
//{
//private:
//	cfather()
//	{
//
//	}
//	cfather(const cfather &a)	//拷贝构造函数系统会默认写在public中
//								//所以避免生成对象时系统默认生成拷贝构造函数，将其主动写在private中
//	{
//
//	}
//	cfather &operator=(cfather &a)	//同理复值函数（=的重载函数）也是系统会默认写在public中，也将其写在private中
//	{
//
//	}
//public:
//	static int nflag;	//静态成员要在类外初始化
//	static cfather * CreateQJ()
//	{
//		if (nflag == 1)
//		{
//			nflag = 0;
//			return (new cfather);
//		}
//		else
//		{
//			return NULL;
//		}
//
//	}
//	~cfather()	//使在主函数可以再次申请一个对象
//	{
//		nflag = 1;
//	}
//};
//int cfather::nflag = 1;	//类外初始化，要使用类名作用域来调用
//
//int main()
//{
//	//cfather as;
//	cfather * pf = cfather::CreateQJ();
//	delete pf;
//	cfather * pf1 = cfather::CreateQJ();
//	delete pf1;
//
//	//if (pf1 = NULL)
//	//{
//
//	//}
//
//	system("pause");
//	return 0;
//
//}