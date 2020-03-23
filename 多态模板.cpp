//#include<iostream>
//using namespace std;
//
//template<typename T = char, typename Y = int>
//class cfather
//{
//public:
//	virtual void fun()
//	{
//		cout << "cfather" << endl;
//	}
//};
//
//////子类含模板
////template<typename M,typename T, typename Y >			
////class cson :public cfather<T, Y>			
////{
////public:
////	void fun()
////	{
////		cout << "cson" << endl;
////	}
////
////};
//
//
////子类不含模板
//class cson :public cfather<int, char>
//{
//public:
//	void fun()
//	{
//		cout << "cson" << endl;
//	}
//
//};
//
//int main()
//{
//	//子类含模板，传递类型
//	//cfather<int,char>* fa = new cson<short,int, char>;		//cson<short,int, char>这里的类型要与子类的模板一致,有三个类型，而且是一一对应，分别对应 M,T,Y
//	//fa->fun();												//前面的cfather<int,char>的类型要与子类继承父类的模板一致public cfather<T ,Y>,而且要一一对应,分别是 T,Y
//	
//	//子类不含模板，传递类型
//	cfather<int, char>* fa = new cson;
//
//	system("pause");
//	return 0;
//
//}