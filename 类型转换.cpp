//#include <iostream>
//using namespace std;
//
//class cfather
//{
//public:
//	int a;
//	virtual void fun()
//	{
//
//	 }
//};
//
//class cson :public cfather
//{
//public:
//	int b;
//	void fun()
//	{
//
//	}
//};
//
//class cother
//{
//public:
//	double f;
//};
//
//int main()
//{
//	cfather *p;
//	cson *s;
//	cother *o;
//
//	//static_cast������ת���������ڲ�ͬ��ϵ�����ת��
//	p=(cfather *)s;		//��ʽǿ��ת��
//	p = static_cast<cfather *>(s);		//��ʽ��ǿ��ת��
//
//	//����ǿ��ת����������������ص���ǿ��ת�������°�sǿ��ת����cother�࣬�Ǵ����
//	//o = static_cast<cother *>(s);
//
//	//����ʹ�þ�ʽ��ǿ������ת��ʱ�����벻�ᱨ��
//	//���ǻὫa��b��ת����double���ͣ�����ĵ���ʱ�ͻ���ֲ�����������������ʾ
//	//o= (cother *)s;
//
//
//	////reinterpret_cast������ת������������Σ�յ�����ת��
//	//o = reinterpret_cast<cother*>(s);
//	//struct dat
//	//{
//	//	short a;
//	//	short b;
//	//};
//	//long value = 0xA224B118;
//	////struct�ṹ���ﺬ���������ֽڵ�short���͵ı��������������ṹ�������ֽ�
//	////��long����Ҳ�����ֽڣ���long��valueת���ɽṹ���dat*���ͣ����ǽ�long��value��ֳ��������ֽ�
//	//dat* p1 = reinterpret_cast<dat*>(value);
//	//cout << hex << p->a;
//
//
//
//	////dynamic_cast������ת�����������м̳й�ϵ��������֮���ת��
//	//p = dynamic_cast<cfather*>(s);	//������ת���ɸ���
//	//s = dynamic_cast<cson*>(p);		//������ת�������࣬Ҫ������Ƕ�̬��������
//	//cson*s1 = dynamic_cast<cson*>(s);	//�Լ�ת�����Լ�����
//
//
//
//	////const_cast������ת��
//	//const cfather* p;
//	//cson* so;
//	//cfather* p1 = const_cast<cfather*>(p);	//��const cfather* p��constȥ��֮���cfather* p������ת��
//	////cson* p1=const<cson*>(p);		//����ȥ��const֮����Ȼ��cfather* �����ͣ�������ʹ��cson*������ת������Ч��
//	////so=(cson*)p;		//����ʹ�þ�ʽ��ǿ������ת��ϵͳ�ǲ��ᱨ��ģ�����Ҳ�ǻ���ڴ����
//
//
//
//	system("pause");
//	return 0;
//}
//
