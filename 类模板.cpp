#include<iostream>
using namespace std;

//�������⣬�κ�λ�ó���cfather��Ҫ����ģ������б�����ģ���ͨ����ʽ���磺��,���Ҷ�Ҫһ��
//ģ�����д��
//template <typename T=char>       //����Ĭ�ϵ�char����

//template <typename T=char��typename Y=int>	//������ָ���Ǵ����������������Ĵ���ʱҲҪ��������
//template <typename T��typename Y=int>		//����Ҳ��ֻ���ұߵ�һ������ָ������

//��ģ�������������������������������������Ҫʹ�õ���ģ�壬����Ҫ���¼�����ģ�������
//template <typename T>
template <typename T = char, typename Y = int>
class cfather
{
public:
	T a;
	cfather(T t)
	{
		a = 10;	//��ֵ
	}
	//void fun()
	//{
	//	cout << a << endl;
	// } 

	//������fun�������������������ⶨ�壬������ʾ
	void fun();
};

template <typename T = char, typename Y = int>		//����һ������ģ��������֮�⣬Ҫ���¼�����ģ�������
void cfather<T, Y>::fun()			//����Ҫ�����������������������a�����ſ��Ա�ʶ��
{
	cout << a << endl;
}


//��C++11����������ģ�����ʹ�ò���Ĭ��ֵ��֮ǰ�ı�����������ʹ��
template<typename T = char>
void fun(T t)
{

}

int main()
{
	//cfather<char> fa('a');	//�����ģ��û��Ĭ�ϵ����ͣ����������cfather����϶�Ӧ��Ҫ���ݵĲ������ͣ�Ҳ����ģ������б�
	cfather<> fa('a');		//�����ģ���а�����Ҫ���ݵĲ������ͣ���cfather��ļ����žͲ��ô��������ˣ�Ҳ����ģ������б���Ҫ����

							//cfather<int,char> fa(13��'a');	//������ʱ�����ʹ��ݴ�������
							//cfather<int> fa(13);		//Ҳ��ֻת��һ������

							//cfather<int, char> fa(12);		//ģ������б�<int,char>�������캯�����ο���ֻ����һ������
	fa.fun();

	cfather<int, char>* pf = new cfather<int, char>(12);		//��12���ǹ��캯������
	pf->fun();

	system("pause");
	return 0;
}