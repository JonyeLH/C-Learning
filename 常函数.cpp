//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//
//	int a;
//
//	//const �������ڹ��캯������������
//	cstu()
//	{
//		a = 12;
//	}
//
//	~cstu()
//	{
//
//	}
//
//	//const��ʹ�÷�����ʹ��λ��
//	void show()const	//const cstu*	ָ���const
//	{
//		// a = 13;		//�����������޸����ݳ�Ա������������ݳ�Աint a
//
//		int b = 2;		//�����������޸��ڲ�������
//		b = a*b;
//
//		//this->a = 15;			����Ĳ�����thisҲ�����޸����ݳ�Ա
//
//		cout << b << " " << a << " I am show" << endl;
//	}
//
//	void fun()
//	{
//		cout << "i am fun" << endl;
//	}
//
//};
//
//
//
//int main()
//{
//	const cstu stu;		//���ﹹ���˳�����stu��������ֻ�ܵ��ó����������ܵ�����ͨ����
//	stu.show();
//	//stu.fun();		//���ﳣ������ͼ������ͨ�������Ǵ���Ĳ���
//
//	cstu stu1;			//��ͨ������Ե��ó�������Ҳ���Ե�����ͨ����
//	stu1.show();
//	stu1.fun();
//
//
//	system("pause");
//	return 0;
//}