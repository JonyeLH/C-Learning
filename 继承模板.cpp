//#include<iostream>
//using namespace std;
//
//template<typename T=char,typename Y=int>
//class cfather
//{
//public:
//	T a;
//	//cfather()		//���๹�캯���޲��� 
//	cfather(T t)
//	{
//		a = t;
//	}
//	void show()
//	{
//		cout << "show" << endl;
//	}
//};
//
////����û��ģ��
////class cson:public cfather<int,char>			//�����cfather����������ģ���ʼ���б�
////{
////public:
////	//cson()		//����Ĺ��캯���޲�������Ĺ��캯��д��
////	cson():cfather<int,char>(12)	//����Ĺ��캯���Ǻ������ģ����������๹�캯���ĳ�ʼ���б�ȥ���Ρ��������cfather���ü�ģ���ʼ���б����˿���
////	{
////
////	}
////};
//
//template<typename T , typename Y >			//����û��ָ�������ͣ�����������Ĺ��캯����������⴫������
//class cson :public cfather<T, Y>			//�����cfather����������ģ���ʼ���б�
//{
//public:
//	//cson()		//����Ĺ��캯���޲�������Ĺ��캯��д��
//	cson():cfather<T, Y>(12)	//����Ĺ��캯���Ǻ������ģ����������๹�캯���ĳ�ʼ���б�ȥ���Ρ��������cfather���ü�ģ���ʼ���б����˿���
//	{
//
//	}
//};
//
//int main()
//{
//	////����û��ģ�壬�����ģ�崫������
//	//cson so; 
//
//	//������ģ�壬�����ģ�崫������
//	cson<int ,char> so;
//	so.show();
//
//	system("pause");
//	return 0;
//
//}