//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//	int nage;
//	cstu()
//	{
//		nage = 12;
//	}
//
//	//��������
//	//int operator++()			
//	//{
//	//	nage += 1;
//	//	return nage;
//	//}
//
//	//��������  this->�ķ���
//	//int operator--()		
//	//{
//	//	this->nage -= 1;
//	//	return nage;
//	//}
//};
////����ǰ��++
//int operator++(cstu& st)		//��������
//{
//	st.nage += 1;
//	return st.nage;
//}
////����ǰ��--
//int operator--(cstu& st)		//��������
//{
//	st.nage -= 1;
//	return st.nage;
//}
//
////�������++
//int operator ++(cstu& st, int n)		//int n����������ǰ���Լӻ��Ǻ����Լӵı�־
//{
//	int a = st.nage;		//�ñ���a��¼�Լ�ǰ��ֵ
//	st.nage += 1;			//nage�Լ�
//	return a;				//�����Լ�ǰ��ֵ
//}
//
//int main()
//{
//	// int a=15;
//
//	cstu st;
//	//ǰ��++   int b = ++a;     b=13   a=13
//	cout << ++st << endl;     //���13
//	cout << --st << endl;		//���12 
//
//								//����++   int b = a++;    //b=12  a=13
//	cout << st++ << endl;		//�������12
//	cout << st.nage << endl;	//�������13
//
//	system("pause");
//	return 0;
//}