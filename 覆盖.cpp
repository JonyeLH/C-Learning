//#include <iostream>
//using namespace std;
//
//
////�������븸����ͬ�ĳ�Աʱ�������������ó�Աʱ��Ĭ�ϵ�������ĳ�Ա,�ʸ����˸���ĳ�Ա
//class cfather
//{
//public:
//	int a;
//	cfather()
//	{
//		a = 12;
//	}
//	int fun(int a)
//	{
//		cout << "cfather fun\n";
//		return 0;
//	}
//
//};
//
//class cson :public cfather		//������ﲻд�̳е��޶��ʣ��Ǿ���Ĭ��Ϊprivate
//{
//public:
//	int a;
//	cson()
//	{
//		a = 10;
//	}
//	void fun()
//	{
//		//�����Ա����
//		cout << a << endl;
//		cout << cfather::a << endl;		//���������ʹ������������ķ���ȥ���ø���ĳ�Ա����cfather::a  cfather::fun(1)
//										//�����Ա����
//		cout << "cson fun" << endl;
//		cout << cfather::fun(1) << endl;
//	}
//};
//
//
//
//int main()
//{
//	cson so;
//	so.fun();
//
//	//so.fun(1);	//�ڸ�����fun���в����ģ�����������̳��лḲ�Ǹ���ĳ�Ա������������ú������Ǵ����
//	so.cfather::fun(1);
//
//
//
//	system("pause");
//	return 0;
//
//}