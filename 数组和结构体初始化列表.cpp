//#include <iostream>
//using namespace std;
//
////结构体可以直接初始化   可以在类外或则类内初始化
//struct STU
//{
//	int i;
//	float f;
//};
//
//
//class cstu
//{
//public:
//	int a[4];
//	cstu() :a()
//	{
//
//	}
//
//
//	STU st;  //结构体构造对象
//	cstu(STU sd) :st(sd)
//	{
//		memset(&a[0], 0, 16);
//	}
//
//
//	void show()
//	{
//		int i;
//		for (i = 0; i < 4; i++);
//		{
//			cout << a[i] << endl;
//		}
//	}
//};
//
//int main()
//{
//	cstu stu;
//	stu.show();
//
//
//	//STU s1 = { 12,12.23f };
//	//STU s2 = s1;			//结构体可以相互赋值
//	//cout << s2.i << " "<<s2.f << endl;
//
//	//STU sf = { 123,123.23f };
//	//cstu stu(sf);
//	//cout << sf.i << " " << sf.f << endl;
//
//
//
//	system("pause");
//	return 0;
//}