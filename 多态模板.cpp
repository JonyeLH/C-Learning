//#include<iostream>
//using namespace std;
//
//template<typename T = char, typename Y = int>
//class cfather
//{
//public:
//	virtual void fun()
//	{
//		cout << "cfather" << endl;
//	}
//};
//
//////���ຬģ��
////template<typename M,typename T, typename Y >			
////class cson :public cfather<T, Y>			
////{
////public:
////	void fun()
////	{
////		cout << "cson" << endl;
////	}
////
////};
//
//
////���಻��ģ��
//class cson :public cfather<int, char>
//{
//public:
//	void fun()
//	{
//		cout << "cson" << endl;
//	}
//
//};
//
//int main()
//{
//	//���ຬģ�壬��������
//	//cfather<int,char>* fa = new cson<short,int, char>;		//cson<short,int, char>���������Ҫ�������ģ��һ��,���������ͣ�������һһ��Ӧ���ֱ��Ӧ M,T,Y
//	//fa->fun();												//ǰ���cfather<int,char>������Ҫ������̳и����ģ��һ��public cfather<T ,Y>,����Ҫһһ��Ӧ,�ֱ��� T,Y
//	
//	//���಻��ģ�壬��������
//	cfather<int, char>* fa = new cson;
//
//	system("pause");
//	return 0;
//
//}