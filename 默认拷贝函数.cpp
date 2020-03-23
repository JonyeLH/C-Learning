#include <iostream>
using namespace std;

class cstu
{

public:

	int b;
	char c[4];

	cstu()
	{
		b = 12;
		c[0] = 'a';
		strcpy(c, "abc");		//字符串拷贝函数，第一个参数是目标字符串的首地址，第二个参数是源
	}

	//默认的拷贝构造函数是要执行拷贝的操作，而默认的构造函数是不执行任何操作
	//cstu(const cstu &a)	   //这里是默认拷贝构造函数，是不执行的，默认内容为空。如果写了拷贝构造函数，就会走
	//如果写了拷贝构造函数，如下所示，就会走拷贝构造函数
	//{
	//this->b=a.b;
	//strcpy(this->c,a.c);

	//}

};

int main()
{
	cstu st;
	cout << st.b << " " << st.c << endl;

	cstu st1 = st;
	cout << st1.b << " " << st1.c << endl;

	system("pause");
	return 0;
}