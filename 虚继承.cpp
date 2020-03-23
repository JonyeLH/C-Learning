//#include <iostream>
//using namespace std;
//
////虚继承是解决多继承调用访问不明确的问题
////虚继承不建议使用，结构复杂，内存开销较大
////B和C都继承了A的数据成员a，那么B和C都相当于复制了A的数据成员a。
////然后D类继承了B和C，相当于D复制了B和C的数据成员a。
////那么D里面就有两个数据成员a，在主函数的调用时就会显示调用不明确的问题
//
////整个虚继承的过程中只有A类的一个数据成员a，B类、C类和D类只是得到了A类中数据成员a的使用权，并没有复制a。
////就不会出现a调用访问不明确的问题
//class cA			//虚基类
//{
//public:
//	int a;
//};
//
//class cB :virtual public cA			//虚继承的写法，就是在继承的前面加上virtual
//{									//这里B虚继承了A  只是从A那里得到a的使用权，而不是像继承那样直接复制父类A			
//public:
//
//};
//
//class cC :virtual public cA			//这里C虚继承了A  这里也是得到a的使用权
//{
//public:
//
//};
//
//class cD :public cB, public cC		//这D继承了B和C  也是相当于得到a的使用权。
//{
//public:
//
//};
//
//int main()
//{
//	cD d;
//	d.a;
//
//	system("pause");
//	return 0;
//
//}