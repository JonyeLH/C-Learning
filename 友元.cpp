//#include <iostream>
//using namespace std;
//
//class cstu
//{
//private:      //�������η����з�װ�ԣ�Ȩ��
////protected��   ������protectedҲ����
//	int age;
//	void fun()
//	{
//		age = 12;
//		cout << "age=" << age << endl;
//	}
//
//
////ʹ�ýӿں�����Ҳ�ܴﵽ���������private������
//public:
//	int Get()
//	{
//		return age;
//	}
//	void set()	
//	{
//		age = 15;
//	}
//
//	friend void fun1();   //��Ԫ   ���Ա������������൱��public   ֱ���ǣ�friend+��������
//	friend int main();    //����Ҳ����ֱ�Ӷ�������������Ԫ
//	friend class cteach;  //�����Զ������������Ԫ
//};
//
//void fun1()
//{
//	cstu stu;
//	stu.fun();
//}
//
//class cteach 
//{
//public:
//	cstu stu2;
//	void fun2()
//	{
//		stu2.fun();
//	}
//};
//
//int main()
//{
////  fun1();   //�����Զ��庯�����Ӷ��������private��protected������
//
////	cstu stu;  //������Ҳ���Է���private��protected������
////	stu.fun();
//
////	cteach teach;   //������ʦ���࣬����ѧ�����private��protected������
//	//teach.fun2();
//
//	cstu stu1;     //����stu1�������
//	stu1.set();    
//	int a = stu1.Get();
//	cout << a << endl;
//
//	system("pause");
//	return 0;
//}