//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//�����ռ���ڴ����
//	//int *p = (int*)malloc(sizeof(int));   //c���Եķ���
//	//int *p1 = new int(121);  //new+type(valve)  ���͵�ƥ��
//	//char *p = new char;
//
//	//*p1 = 1;   //д
//	//cout << *p1 << endl;  //��
//
//	//delete p1;  //ɾ��ָ��  
//
//
//	//�������ռ��ڴ����
//	int *p = new int[5];
//	//memset(p, 0, 5 * 4);   // memery set �������ʼ������ʼ���˾Ͳ����ڸ����鸳ֵ�ˣ���һ����ռ����ʼ��ַ���ڶ��������ֵ����������ռ�Ĵ�Сint��4���ֽڣ�����5��Ԫ��
//	//int *P1=malloc(5*4);  // c���Եķ���
//	p[0] = 12;
//	p[1] = 23;
//	p[2] = 32;
//	p[3] = 44;
//	p[4] = 51;
//	cout << p[0] << " " << p[1] << " "<<p[2]<<" "<<p[3]<<" "<<p[4]<<endl;
//
//	delete[] p;   //[]��ָ�������˼
//
//	system("pause");
//	return 0;
//}