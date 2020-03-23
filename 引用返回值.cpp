//#include <iostream>
//using namespace std;
//
//int &fun()
//{
//	int a = 12;
//	return a;     //这里的a是局部变量
//}
//int main()
//{
//	int &b = fun();  //a是局部变量，调用完了fun()之后，a的地址将会被释放 
//	cout << b << endl;  //b的操作是非法空间，其结果是未知的
//	system("pause");
//	return 0;
//}