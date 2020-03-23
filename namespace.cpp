//#include<iostream>
//using namespace std;
//
//namespace stu/*命名空间的声明*/
//{
//	void sort()
//	{
//		cout << "stu" << endl;
//	}
//}
//
//namespace stu1
//{
//	void sort()
//	{
//		cout << "stu1" << endl;
//	}
//}
//
////int main()
//{
//	//using namespace stu;/*可以放在第11和第19行但是不能放在第3行，命名空间不能放在命名空间的声明之前*/
//	/*using namespace stu; *//*也可以输出stu1,也以放在第19行，不能放在第11和第3行，第11行是stu1的命名空间的声明*/
//	stu1::sort(); //这里使用了stu::sort()或者stu1::sort()，而不用using namespace stu的命名空间也能的带相同的结果，::是作用于运算符
//	system("pause");/*方便查看结果*/
//	return 0;
//}
