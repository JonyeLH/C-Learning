#include <iostream>
using namespace std;

int main()
{
	int a = 12;					//��a��ʼ��
	int b;						//��b��ֵ
	b = 13;

	int c[12] = { 1,2,3,4 };    //��������г�ʼ��
	int d[12];					//��ֵ
	d[1] = 10;
	d[2] = 11;

	struct stu					//�ṹ��ĳ�ʼ���͸�ֵ
	{
		int e;
	};
	stu f = { 15 };				//�ṹ���ʼ����������f��ʼ����ʽ
	f.e = 12;					//f�ĸ�ֵ��ʽ

	int g = 20;					//���ó�ʼ��
	int &h = g;

	const int i = 15;			//const ʹ��ʱҪ��ʼ�������û�м�ʱ��ֵ���Ͳ��ܸ�ֵ��

	system("pause");
	return 0;
}