//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
////private:
//	int nage;
//	double height;
//
//public:
//	cstu()
//	{
//		nage = 12;
//		height = 165.1;
//	}
//	void show()
//	{
//		cout << nage << " " << height << endl;
//	}
//
////	int operator =( int a)		//������ֵ��������������ڵ�
////{
////		nage = a;
////		return a;
//
//
//
//	/* int& operator +=( int a)
//	{
//		nage = nage + a;
//		return (nage);
//	}*/
//
//	//friend int operator +=(cstu& st1, int a);
//
//};
//	
//	//�޷�����ʽ
//void operator +=(cstu& st, int a)
//{
//	st.nage = st.nage + a;
//}
//
//	//���س�Ա
//	/*int& operator +=(cstu& st1, int a)
//	{
//		st1.nage = st1.nage + a;
//		return (st1.nage );
//	}*/
//
//	//���ض���
//	/*cstu& operator +=(cstu& st1, int a)
//	{
//		st1.nage = st1.nage + a;
//		return (st1);
//	}*/
//
//int main()
//{
//	cstu st;
//	int a = 115;
//	int b;
//	st += a+=200;		//����
//
//	cout << st.nage;		//�޷�������
//
//	system("pause");
//	return 0;
//}