//#include <iostream>
//using namespace std;
//
//class Cout
//{
//public:
//	int a;
//	
//	//Cout()
//	Cout():in (this)		//���ⲿ��Ĺ��캯�����ڲ���Ķ��󴫵�ָ��
//	{
//		a = 12;
//	}
//
////�ڲ���Ĵ���  Ҳ��Ƕ����
//public:
//	class Cin			
//	{
//	public:
//		int b;
//
//		Cout *p;
//		Cin(Cout *pf):p(pf)
//		{
//			b = 13;
//		}
//		void fun()		
//		{
//			//cout << a << endl;		//�ڲ��಻��ֱ��ʹ���ⲿ��ĳ�Ա
//			//Cout ou;					//����ʹ���ⲿ��Ķ��������ó�Ա
//			//cout << ou.a << endl;	
//
//			cout << p->a << endl;
//		}
//	};
//
//	//���ⲿ������һ���ڲ���Ķ���
//public:
//	Cin in;
//};
//
//
//int main()
//{
//	//������������ڲ����fun����
//	//���ⲿ�������ڲ�������һ����������������ͨ�����µ���
//	Cout oi;		
//	oi.a = 15;
//	oi.in.fun();
//
//	system("pause");
//	return 0;
//}