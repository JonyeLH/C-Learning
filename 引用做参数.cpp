//#include<iostream>
//using namespace std;
//
////����������
//void fun(int &a)   //������������a����b�ĸ�ֵ��a=b����a���Ըı�fun���ڲ�ֵ��a=new a��  a���Է������ı��ⲿb��ֵ(b=new a)   ��int &a�����β�
//{
//	a = 13;
//	cout << a << endl;
//}
//
//void fun1(int a)   //��ͨ���������� a����b�ĸ�ֵ(a=b)��a���Ըı�fun1���ڲ�ֵ(a=new a)  ��aû���ı��ⲿb��ֵ(b==b)  ��int a�����β�
//{
//	a = 14;
//	cout << "fun1= " << a << endl;    //a=14
//}
//
//void fun2(int *a)   //ָ��������  b�ĵ�ַ���ݸ�aָ��ĵ�ַ����ʼ��   �������ڲ���*a���е�ַ�����¸���ַ  Ҳ���Ƕ�b�ĵ�ַ���޸ĵ�ַ�Ĳ��� ��int * a�����β�
//{
//	*a = 15;
//	cout << a << endl;
//}
//
//int main()
//{
//	int b = 12;
//	fun(b);     //b=12 ����fun ��a=12  Ȼ��a����ֵ=13  �������a=13  ��b=new a=13  
//	cout << b << endl;   //b=13
//
//	fun2(&b);
//	cout << b << endl;    //�������b=15
//
//	fun1(b);   //b=13����fun1  ��a=13  Ȼ��a=����ֵ=14  �������a=14
//	cout << b << endl;    //b=15
//
//	system("pause");
//	return 0;
//}