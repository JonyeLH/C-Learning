#include <iostream>
using namespace std;

//�麯�������Ǹ��������ĵ���
//��̬˼�룬�����ָ���������ĺ���
//���������ĵ��ã������Ǹ����������һ���ĳ�Ա
class cfather
{
public:
	virtual void show()		//�麯����д��  ���������virtual��������������ָ����þͿ��Ե��õ������show����
	{						//����ĵ��ñ����Ǹ��������ĺ�����Ա����һ����Ϊshow����
		cout << "class cfather\n";
	}
};

class cson :public cfather
{
public:
	int a;
	void show()
	{
		cout << "class cson\n";
	}
};

class cson1 :public cfather
{
public:
	int a;
	void show()
	{
		cout << "class cson1\n";
	}
};

int main()
{
	//���������ĵ���   ֻ��ʹ�ø����ָ���������ĺ���
	cfather*fa = new cson;		//ָ���������˭�ĳ�Ա����Ҫ��ָ��ָ��˭�Ŀռ䡣����ʱcson�����˿ռ䣬��faָ��ָ��cson��show����
	fa->show();		//��ͨ�������������ã���ǰ��û��virtual��������õĽ��ֻ��������Ը���̳е�show()����

	cfather*fa1 = new cson1;	//������cson1�����˿ռ䣬��faָ��ָ��cson1��show����
	fa1->show();

	//����Ը���ļ̳�
	cfather fa2;   //����ĺ���ǰ��virtual ����ʹ�ö������ʱ����Ȼ�ǵ�������Ը���̳е�show()����
	fa2.show();

	system("pause");
	return 0;

}