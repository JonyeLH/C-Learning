//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//	int nage;
//	double dscore;
//
//	cstu()
//	{
//		nage = 12;
//		dscore = 12.12;
//	}
//};
//
////void operator +(cstu& st, int a)		//�����operator���Ǳ�ʾ�������㣬�����ʲô��������Ǳ�ʾ������������ء��ͺ�������һ��������������Ӧ������Ҫ��ǰ�涨����������ص����ͺ�˳��һ��
////{
////	cout << st.nage + a << endl;
////}
//
//void operator +(int a, cstu& st)		//�����operator���Ǳ�ʾ�������㣬�����ʲô��������Ǳ�ʾ������������ء��ͺ�������һ��������������Ӧ������Ҫ��ǰ�涨����������ص����ͺ�˳��һ��
//{
//	cout << st.nage + a << endl;
//}
//
//int operator +(cstu& st, int a)		//�������з���ֵ��
//{
//	return (st.nage + a);
//}
//
//cstu& operator +(cstu& st, cstu& st1)		//������������������㣬���Է���ֵ���������cstu
//											//�����Ϊ��Ϊ����ֵ��return����ÿ������캯�����������⴫�����ã��Ϳɱ������
//{
//	st1.nage += st.nage;
//	return st1;
//}
//
//int main()
//{
//	cstu st1,
//		st2;
//
//	20 + st2;
//
//	//����ʱǰ����������������ؼ�����֮����Ҫ�з���ֵ������������м���
//	cout << (st1 + 15 + 13) << endl;
//	cout << (st1 + st2) + 23 << endl;
//
//	system("pause");
//	return 0;
//}