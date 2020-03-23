//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//	int a;
//
//	cstu(int a)
//	{
//		this->a = a;   //this->a可以认为是cstu*的a 就是外面的int a       
//		this->show();
//	}
//
//	void show()		 //this不是成员，是类成员函数的隐含参数（show函数没有参数时，系统会默认给show函数的第一个参数是this） 
//					 // 所以在类内的各函数中是可以调用，但是不能在类内别的位置直接使用
//	{
//		cout << a << endl;
//		//this->a;	 //如在这里在show函数里面调用this
//	}
//
//	cstu* GetAddr()			//得到对象地址 或则得到对象*this
//	{
//		return this;
//	}
//};
//
//
//int main()
//{
//	cstu st(12);			//没有对象，就没有this指针    		
//	st.show();
//	//st.this;				//this不是成员， 所以这里是调用不了this的	
//
//	cstu* p = st.GetAddr();	//得到st的地址
//	cout << p << endl;
//	p->show();
//
//	cstu st1(13);
//	p = st1.GetAddr();		//得到st1的地址
//	cout << p << endl;
//
//	system("pause");
//	return 0;
//}