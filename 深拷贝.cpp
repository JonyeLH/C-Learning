//#include <iostream>
//using namespace std;
//
//class cstu
//{
//
//public:
//
//	int* a;
//
//	cstu()
//	{
//		//在构造函数对a进行初始化并且赋予空间
//		a = new int[2];
//		a[0] = 12;
//		a[1] = 13;
//	}
//
//	//同一个地址多次释放空间 系统就会崩溃，为避免这个问题，使用深拷贝方法
//	//当是指针成员是，要使用深拷贝，重新给a赋予空间 。没有指针成员就使用浅拷贝
//	cstu(const cstu&b)
//	{
//		//拷贝构造函数对a进行空间的申请
//		this->a = new int[2];
//		//this->a[0] = b.a[0];				//进行复制
//		//this->a[1] = b.a[1];
//
//		memcpy(this->a, b.a, 8);			//复制函数，当有多个变量需要复制时，可以使用这个函数
//
//	}
//
//	~cstu()
//	{
//		delete[]a;
//	}
//	/*cstu(const cstu &a)		//这里是默认拷贝构造函数，是不执行的，默认为空。如果写了拷贝构造函数，就会走
//	{
//
//	}*/
//
//};
//
//cstu& fun(cstu& a)			//传递引用，则不需要调用拷贝构造函数，从而解决以上问题，也提高了代码的效率
//{
//	return a;
//}
//
//cstu* fun(cstu* a)			//同理传递指针的方法也不需要调用拷贝构造函数
//{
//	return a;
//}
//
//
//int main()
//{
//	//在这at=st  在执行过程中，会两次调用析构函数，而且两次先后释放都是同一个空间，就会崩溃
//	{
//		cstu at;
//		cout << at.a[0] << " " << at.a[1] << endl;
//
//		fun(at);		//对应传递引用的方法
//		fun(&at);		//对应传递指针的方法
//
//		cstu st;
//		cout << st.a[0] << " " << st.a[1] << endl;
//
//	}
//
//	system("pause");
//	return 0;
//}