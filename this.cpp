//#include <iostream>
//using namespace std;
//
//class cstu
//{
//public:
//	int a;
//
//	cstu(int a)
//	{
//		this->a = a;   //this->a������Ϊ��cstu*��a ���������int a       
//		this->show();
//	}
//
//	void show()		 //this���ǳ�Ա�������Ա����������������show����û�в���ʱ��ϵͳ��Ĭ�ϸ�show�����ĵ�һ��������this�� 
//					 // ���������ڵĸ��������ǿ��Ե��ã����ǲ��������ڱ��λ��ֱ��ʹ��
//	{
//		cout << a << endl;
//		//this->a;	 //����������show�����������this
//	}
//
//	cstu* GetAddr()			//�õ������ַ ����õ�����*this
//	{
//		return this;
//	}
//};
//
//
//int main()
//{
//	cstu st(12);			//û�ж��󣬾�û��thisָ��    		
//	st.show();
//	//st.this;				//this���ǳ�Ա�� ���������ǵ��ò���this��	
//
//	cstu* p = st.GetAddr();	//�õ�st�ĵ�ַ
//	cout << p << endl;
//	p->show();
//
//	cstu st1(13);
//	p = st1.GetAddr();		//�õ�st1�ĵ�ַ
//	cout << p << endl;
//
//	system("pause");
//	return 0;
//}