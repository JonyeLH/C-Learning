#include <iostream>
using namespace std;

class cpeople		//������ ����
{
private:
	void fun1()
	{
		cout << "father fun1" << endl;
	}
protected:
	void fun2()
	{
		cout << "father protacted" << endl;
	}
public:

	void fun3()
	{
		cout << "father public" << endl;
	}
};

//public �̳�֮������̳��˸�������г�Ա�������public��Ա���������ⶼ�ܷ��ʡ�
//���Ǹ����protected��Աֻ������������ڷ��ʣ������ⲻ�ܷ��ʡ�
//�����private��Ա�������������ⶼ���ܷ��ʣ�������������Ԫ��

//protected �̳�֮�󣬸����public����Ϊprotected ��
//���Ǳ�����̳еĸ���public��Ա���protected��Ա�����̳еĸ���protected��Ա��private��Ա����ԭ�������ԡ�

//private �̳�֮�󣬸������еĳ�Ա�����ܱ��������
class cXM :public  cpeople		//������ ����
{
public:
	int a;
	void gotoschool()
	{
		cout << "gotoschool" << endl;
	}
	void fun4()
	{
		fun2();
	}

};


int main()
{
	cXM xm;
	xm.fun3();

	xm.fun4();


	system("pause");
	return 0;

}