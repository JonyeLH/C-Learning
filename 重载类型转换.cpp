//#include <iostream>
//using namespace std;
//
////�����ǿ��ת��Ҫ��
////û����ʾ�������ͣ�����Ҫд����ֵ
////û�в���
////���붨�����ĳ�Ա����
////��Ӧ�øı��������ݣ�������const����
//class cstu
//{
//public:
//	int a;
//	double b;
//	cstu()
//	{
//		a = 13;
//		b = 12.12;
//	}
//
//	operator int() const		//���������ת����ʽ�� ���޸�ֵ���ͼ���const
//	{
//		return a;
//	}
//
//	operator double() const		//����ת����ʽ��û�з������ͣ������з���ֵ  �����������
//	{
//		return b;
//	}
//
//};
//
//int main()
//{
//	//(int)a ���� a(int)  ��ֵ����������ת������ʽ��ǰ����c�����е�д����������C++��д��
//	float a = 12.12f;
//	cout << (int)a << endl;
//
//	//��������͵�ת�����Ƽ�ʹ�õ�һ��
//	cstu st;
//	cout << (int)st << endl;
//	cout << (double)st << endl;
//
//	system("pause");
//	return 0;
//}