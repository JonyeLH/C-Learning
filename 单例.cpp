////#include <iostream>
//using namespace std;
//
////������˼�������ⲿ�����������ֻ����һ������
////�����ڵĹ��캯����private����protectedʱ�����������޷�ʹ�������ɶ����ˣ��������˶��������
////���еķǾ�̬��Ա���������������������ö���ȥ���á�
////��̬��Ա�������ȿ���ʹ�ö���ȥ���ã�Ҳ����������������ȥ����
//class cfather
//{
//private:
//	cfather()
//	{
//
//	}
//	cfather(const cfather &a)	//�������캯��ϵͳ��Ĭ��д��public��
//								//���Ա������ɶ���ʱϵͳĬ�����ɿ������캯������������д��private��
//	{
//
//	}
//	cfather &operator=(cfather &a)	//ͬ��ֵ������=�����غ�����Ҳ��ϵͳ��Ĭ��д��public�У�Ҳ����д��private��
//	{
//
//	}
//public:
//	static int nflag;	//��̬��ԱҪ�������ʼ��
//	static cfather * CreateQJ()
//	{
//		if (nflag == 1)
//		{
//			nflag = 0;
//			return (new cfather);
//		}
//		else
//		{
//			return NULL;
//		}
//
//	}
//	~cfather()	//ʹ�������������ٴ�����һ������
//	{
//		nflag = 1;
//	}
//};
//int cfather::nflag = 1;	//�����ʼ����Ҫʹ������������������
//
//int main()
//{
//	//cfather as;
//	cfather * pf = cfather::CreateQJ();
//	delete pf;
//	cfather * pf1 = cfather::CreateQJ();
//	delete pf1;
//
//	//if (pf1 = NULL)
//	//{
//
//	//}
//
//	system("pause");
//	return 0;
//
//}