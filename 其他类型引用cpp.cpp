//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//常量引用 12 12.23 'q'
//	const int &a = 12;   //对于常量的引用必须加const，此后a不能被修改，只能读
//
//	cout << a << endl;
//
//	//数组的引用
//	int arr[12];
//	int(&b)[12] = arr;  //先引用 后类型！！
//
//	b[2] = 13;
//	cout << arr[2]<< endl;
//	
//	//二维数组的引用
//	int arr2[2][3];
//	int(&c)[2][3]=arr2;   //先引用 后类型！！
//
//	c[1][2]=123;
//	cout << arr2[1][2] << endl;
//
//	//指针的引用
//	int d = 12;
//	int *point = &d;
//	int *(&e) = point;
//	*e = 24;
//	cout << *point << endl;
//
//	system("pause");
//	return 0;
//}