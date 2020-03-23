//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//单个空间的内存分配
//	//int *p = (int*)malloc(sizeof(int));   //c语言的方法
//	//int *p1 = new int(121);  //new+type(valve)  类型的匹配
//	//char *p = new char;
//
//	//*p1 = 1;   //写
//	//cout << *p1 << endl;  //读
//
//	//delete p1;  //删除指针  
//
//
//	//数组分配空间内存分配
//	int *p = new int[5];
//	//memset(p, 0, 5 * 4);   // memery set 给数组初始化，初始化了就不用在给数组赋值了，第一个填空间的起始地址，第二个填的是值，第三个填空间的大小int是4个字节，共有5个元素
//	//int *P1=malloc(5*4);  // c语言的方法
//	p[0] = 12;
//	p[1] = 23;
//	p[2] = 32;
//	p[3] = 44;
//	p[4] = 51;
//	cout << p[0] << " " << p[1] << " "<<p[2]<<" "<<p[3]<<" "<<p[4]<<endl;
//
//	delete[] p;   //[]是指数组的意思
//
//	system("pause");
//	return 0;
//}