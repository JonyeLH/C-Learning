////#include <iostream>
//using namespace std;
////�ڶ�̬�����У�����ͷŸ���ָ�룬ֻ����ø��������������
////����ڸ������������ǰ����virtual���ݹ��������������Ϳ��Ե�������͸��������������
////���ǵ������������������Ȼ���Ǹ������������
//class cfather
//{
//public:
//	virtual ~cfather()
//	{
//		cout << "cfather\n";
//	}
//
//};
//
//class cson :public cfather
//{
//public:
//
//	~cson()					//�������������ǰ����Ĭ����һ��virtual,Ҳ������ʾ�ļ���virtual
//	{
//		cout << "cson\n";
//	}
//};
//
//class cgrandson //:public cson
//{
//public:
//	~cgrandson()
//	{
//		cout << "cgrandson\n";
//	}
//};
//
//int main()
//{
//	//cfather*fa = new cson;
//	//delete fa;
//
//	//cson * son = new cgrandson;
//	//delete son;
//
//	cfather*fa = new cson;		//ǰ����cgrandsonû�м̳�cson���ࡣ
//	delete (cgrandson*)fa;		//delete�ĸ����͵�ָ�룬�͵���˭����������������ǿת( cgrandson* )������ָ�룬���Ե���cgrandson����������
//								//���cgrandson��̳���cson�࣬��ô������õĻ���cson���cfather�����������
//	system("pause");
//	return 0;
//
//}