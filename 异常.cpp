//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
////ʹ�����ã����⿽������
//class cpeople
//{
//public:
//	int b;
//	cpeople()
//	{
//		b = 12;
//	}
//};
//
//void fun(int a)		//abort�������쳣����ʽ
//{
//	if (a == 0)
//	{
//		abort();
//	}
//	cout << "a" << a << endl;
//	
//}
//
//void fun1(int a)
//{
//	while (a < 10)
//	{
//		if (5 == a)
//		{
//			throw a;		//�׳�һ����
//			//trow 12.12;   //�׳�һ������������Ӧ�����Ĭ����ʽ
//		}
//		a++;
//		//cout<<a<<endl;
//	}
//
//}
//
////ʹ�����ú�ָ�룬���⿽������
//void fun2(cpeople &c)
//{
//	while (c.b < 20)
//	{
//		if (15 == c.b)
//		{
//			throw c;		//�׳�����c
//			//throw &c;     //�׳���ַc				
//		}
//		c.b++;
//		//cout<<a<<endl;
//	}
//}
//
//int main()
//{
//	//abort()�쳣������ʵ��
//	fun(1);
//
//	////try catch�쳣��ʵ��
//	try
//	{
//		fun1(2);
//	}
//	//catch (int b)
//	//{
//	//	cout << b << endl;
//	//}
//
//	//�����5����ܼ�������
//	catch (int b)
//	{
//		try
//		{
//			fun1(b + 1);
//		}
//		catch (int a)
//		{
//		}
//	}
//
//	//��catch������û��дȫ��ʹ��������ʽҲ���Բ���
//	catch (...)		
//	{
//		cout << "default" << endl;
//	}
//
//	//�׳����ú�ָ��
//	cpeople po;
//	try
//	{
//		fun2(po);
//	}
//	catch (cpeople& a)		//�׳�����
//	{
//	}
//	catch (cpeople *d)		//�׳���ַ
//	{
//		d->b++;
//	}
//
//
//	system("pause");
//	return 0;
//}