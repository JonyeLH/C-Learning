//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//�������� 12 12.23 'q'
//	const int &a = 12;   //���ڳ��������ñ����const���˺�a���ܱ��޸ģ�ֻ�ܶ�
//
//	cout << a << endl;
//
//	//���������
//	int arr[12];
//	int(&b)[12] = arr;  //������ �����ͣ���
//
//	b[2] = 13;
//	cout << arr[2]<< endl;
//	
//	//��ά���������
//	int arr2[2][3];
//	int(&c)[2][3]=arr2;   //������ �����ͣ���
//
//	c[1][2]=123;
//	cout << arr2[1][2] << endl;
//
//	//ָ�������
//	int d = 12;
//	int *point = &d;
//	int *(&e) = point;
//	*e = 24;
//	cout << *point << endl;
//
//	system("pause");
//	return 0;
//}