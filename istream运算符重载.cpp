//#include <iostream>
//using namespace std;
//
//class cstu
//{
//private:
//	int nage;
//	double height;
//
//public:
//	//cstu()		//���ݳ�Աһ�����private����
//	//{
//	//nage = 0;
//	//height = 0;
//	//}
//	void show()
//	{
//		cout << nage << " " << height << endl;
//	}
//
//	friend istream& operator >> (istream& ist, cstu& st);		//ʹ����Ԫ������private�����ݳ�Ա���������������ⶨ��
//
//};
//
//istream& operator >> (istream& ist, cstu& st)
//{
//	ist >> st.nage >> st.height;
//
//	//��������д���ʹ�����ֵ��ʼ��
//	if (ist.fail())
//	{
//		st.nage = 0;
//		st.height = 0;
//	}
//
//	return ist;
//}
//
//int main()
//{
//	cstu st;
//	cin >> st;
//	st.show();
//
//	system("pause");
//	return 0;
//}