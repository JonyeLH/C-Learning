////#include <iostream>
//using namespace std;
////在多态环境中，如果释放父类指针，只会调用父类的析构函数。
////如果在父类的析构函数前加上virtual，据构成了虚析构，就可以调用子类和父类的析构函数。
////先是调用子类的析构函数，然后是父类的析构函数
//class cfather
//{
//public:
//	virtual ~cfather()
//	{
//		cout << "cfather\n";
//	}
//
//};
//
//class cson :public cfather
//{
//public:
//
//	~cson()					//子类的析构函数前面是默认有一个virtual,也可以显示的加上virtual
//	{
//		cout << "cson\n";
//	}
//};
//
//class cgrandson //:public cson
//{
//public:
//	~cgrandson()
//	{
//		cout << "cgrandson\n";
//	}
//};
//
//int main()
//{
//	//cfather*fa = new cson;
//	//delete fa;
//
//	//cson * son = new cgrandson;
//	//delete son;
//
//	cfather*fa = new cson;		//前提是cgrandson没有继承cson的类。
//	delete (cgrandson*)fa;		//delete哪个类型的指针，就调用谁的析构函数，这里强转( cgrandson* )的类型指针，所以调用cgrandson的析构函数
//								//如果cgrandson类继承了cson类，那么这里调用的还是cson类和cfather类的析构函数
//	system("pause");
//	return 0;
//
//}