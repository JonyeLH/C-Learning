#include <iostream>
using namespace std;

class cgrandfather		//�游��
{
public:
	cgrandfather(int a, int b)
	{
		cout << "i am grandfather" << endl;
	}
	cgrandfather(int c)
	{

	}
};

class cfather : public cgrandfather	//������ ����
{
public:
	cfather(int a) : cgrandfather(1, 2)		//������游������˼̳У�����Ҫ���������ʼ��������������಻�ܶ��游����в�����ʼ��
	{										//�����ж�����캯����ͨ������ĳ�ʼ���б����ʽѡ���Զ�Ӧȥ�����Ǹ�����Ĺ��캯��
		cout << "i am fatherclass" << endl;
	}
};


class cson :public  cfather	//������ ����
{
public:
	int a;
	cson() :cfather(1)		//����Ĺ��캯���в�����ʱ��Ҫ�����๹�캯���ĳ�ʼ���б���г�ʼ������
	{						//˭�̳У�˭���丸����в�����ʼ��
		cout << "cXM" << endl;
	}

};



int main()
{
	cfather father(1);
	cson son;

	system("pause");
	return 0;

}