#include<iostream>
using namespace std;

//ģ���˼�룺���ͱ��˼�롣ʹ��һ�������壬ʵ�ֶ������
//����ģ�����£�T��ͨ�õ����͡������Ϳ��Դ��ݶ�����͵ı���
//�������д��template<class T> class��typename��ͬ
//template<typename T>
//void fun(T a)
//{
//	cout << a << endl;
//}

////����д���ͨ�õ�����
//template<typename T, typename Y>
//template<typename T, class Y>		//typename��class����ͬʱʹ��
//void fun(T a,Y b)
//{
//	cout << a <<" "<< b << endl;
//}



struct node
{
	int a;
	double b;
};

template<typename T>
void fun(T a)
{
 	cout << a << endl;
}

//����ģ����廯     
//�����ľ��廯����������������⣬�������ģ�����дһ��,����ģ�塣��ͨ��������ִ��
//template<>void fun <node>(node no)
//{
//	cout << no.a << " " << no.b << endl;
//}
//template<>void fun<int>(int no)
//{
//	cout << no<< endl;
//}

//void fun(int a)
//{
//
//}

//����ģ��ʵ����
//������������ָ�������Ķ���
template void fun<int>(int a);

int main()
{
	//ģ�庯���ĵ���
	//fun(12.12);

	//ģ�庯�����廯�ĵ���
	//node no = { 12, 12.12 };
	//fun(no);

	//ģ�庯��ʵ�����ĵ���
	//fun(12);

	system("pause");
	return 0;
}


////֮ǰ��Ҫд�������
//void fun(int a)
//{
//	cout << a << endl;
//}
//void fun(double d)
//{
//	cout << d << endl;
//}
