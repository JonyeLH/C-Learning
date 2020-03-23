//#include <iostream>
//using namespace std;
//
////析构函数的调用是，先从子类开始调用，然后调用父类的析构函数，依此往上调用
//class cgrandfather
//{
//public:
//	cgrandfather()
//	{
//		cout << "cgrandfather" << endl;
//	}
//
//	~cgrandfather()
//	{
//		cout << "cgrandfather" << endl;
//	}
//};
//
//class cfather : public cgrandfather
//{
//public:
//	cfather()
//	{
//		cout << "cfather\n";
//	}
//
//	~cfather()
//	{
//		cout << "cfather\n";
//	}
//};
//
//
//class cson :public  cfather
//{
//public:
//	cson()
//	{
//		cout << "cson\n";
//	}
//
//	~cson()
//	{
//		cout << "cson\n";
//	}
//
//};
//
//
//
//int main()
//{
//	{
//		cson so;
//	}
//
//	system("pause");
//	return 0;
//
//}