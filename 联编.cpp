//#include<iostream>
//using namespace std;
//
////��������൱�ں������õĹ��̣���Ϊ��̬����Ͷ�̬����
////һ����˵���Ǿ�̬����(�ڱ�����ϵͳ����֪���ĺ����ĵ���)
////��̬���ࣨ�����е�ʱ��ϵͳ��֪�����õĺ��������ڶ�̬������������
//class CA
//{
//public:
//	virtual void fun()
//	{
//		cout << "CA" << endl;
//	}
//};
//void fun1()
//{
//	cout << "CA" << endl;
//}
//
//
//class CB :public CA
//{
//public:
//	void fun()
//	{
//		cout << "CB" << endl;
//	}
//};
//
//
//int main()
//{
//	//��ͨ�ľ�̬����
//	CA fa;
//	fa.fun();
//	fun1();
//
//
//	//��̬�Ķ�̬����
//	CA*a ;
//	int b;
//	cin >> b;
//	switch(b)
//	{
//	case 1: a = new CA; break;
//	case 2: a = new CB; break;
//	}
//	a->fun();
//
//	system("pause");
//	return 0;
//}