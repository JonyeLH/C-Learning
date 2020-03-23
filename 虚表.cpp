//#include <iostream>
//using namespace std;
//
//class cfather
//{
//public:
//	virtual void fun()
//	{
//		cout << "class cfather\n";
//	}
//
//	virtual void show()
//	{
//		cout << "class cfather\n";
//	}
//};
//
//class cson :public cfather
//{
//public:
//
//	void show()
//	{
//		cout << "class cson\n";
//	}
//};
//
//
//int main()
//{
//	//父类所有的虚函数都按地址存放在虚表里，每次系统都会检查父类的函数成员是否含有virtual。
//	//如果有，就会进入虚表，按照地址取相应的虚函数。
//	//对象首地址的前四个字节就是虚表的首地址
//	//虚表里的各个虚函数的类型可能是不一致的
//	cfather* fa = new cson;
//	fa->show();
//
//	//*fa    是整个对象的地址
//	//*(int *)fa    取对象的前四个字节，也就是进入虚表首地址
//	//(int *)*(int *)fa;	//把虚表的首地址强转换成int类型，然后整个虚标的虚函数类型都是int类型，可进行地址增量自加，取到下一个虚函数。在这然是取地址操作
//	//*((int *)*(int *)fa + 0);	//这里再取*就是对虚表首地址的首元素
//	//*((int *)*(int *)fa + 1);	//这里再取*就是对虚表第二个地址的首元素	
//
//
//	//取出的内容是int的函数类型，还要将函数转换成与父类的虚函数类型相一致
//	//typedef是将void函数指针类型名命为p
//	//((p)(*((int *)*(int *)fa + 0)))  然后整体强转成p的类型，就是一个函数指针了
//	//在后面加（）就可以调用这个函数了，如下所示
//
//	typedef void(*p)();
//	((p)(*((int *)*(int *)fa + 0)))();
//
//	system("pause");
//	return 0;
//
//}