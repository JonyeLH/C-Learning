//#include <iostream>
//using namespace std;
//
//class cstu
//{
//private:
//	int nage;
//	double height;
//
//public:
//	//cstu()		//数据成员一般放在private里面
//	//{
//	//nage = 0;
//	//height = 0;
//	//}
//	void show()
//	{
//		cout << nage << " " << height << endl;
//	}
//
//	friend istream& operator >> (istream& ist, cstu& st);		//使用友元来访问private的数据成员，类内声明，类外定义
//
//};
//
//istream& operator >> (istream& ist, cstu& st)
//{
//	ist >> st.nage >> st.height;
//
//	//如果输入有错，就使输出的值初始化
//	if (ist.fail())
//	{
//		st.nage = 0;
//		st.height = 0;
//	}
//
//	return ist;
//}
//
//int main()
//{
//	cstu st;
//	cin >> st;
//	st.show();
//
//	system("pause");
//	return 0;
//}