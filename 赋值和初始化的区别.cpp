#include <iostream>
using namespace std;

int main()
{
	int a = 12;					//对a初始化
	int b;						//对b赋值
	b = 13;

	int c[12] = { 1,2,3,4 };    //对数组进行初始化
	int d[12];					//赋值
	d[1] = 10;
	d[2] = 11;

	struct stu					//结构体的初始化和赋值
	{
		int e;
	};
	stu f = { 15 };				//结构体初始化声明变量f初始化形式
	f.e = 12;					//f的赋值形式

	int g = 20;					//引用初始化
	int &h = g;

	const int i = 15;			//const 使用时要初始化，如果没有及时赋值，就不能赋值了

	system("pause");
	return 0;
}