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
		strcpy(c, "abc");		//�ַ���������������һ��������Ŀ���ַ������׵�ַ���ڶ���������Դ
	}

	//Ĭ�ϵĿ������캯����Ҫִ�п����Ĳ�������Ĭ�ϵĹ��캯���ǲ�ִ���κβ���
	//cstu(const cstu &a)	   //������Ĭ�Ͽ������캯�����ǲ�ִ�еģ�Ĭ������Ϊ�ա����д�˿������캯�����ͻ���
	//���д�˿������캯����������ʾ���ͻ��߿������캯��
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