//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int val = 10;
//	int* p = &val; //p����ű���val�ĵ�ַ, ����˵p��ָ�����val��ָ��
//	cout << *p << endl; //�ɽ����÷���* �õ�ָ��p��ָ�Ķ���, ���10
//
//	int i = 20;
//	int* p1 = 0; //p����ʼ��,��û��ָ���κζ���
//	int* p2 = &i; //p2����ʼ��,����i�ĵ�ַ
//	int* p3; //���p3�����ڿ���,��p3��ֵ���޷�ȷ����
//
//	p3 = p2; //p3��p2ָ��ͬһ������i
//	cout << *p2 << " " << *p3 << endl;
//
//	p2 = 0; //����p2��ָ���κζ�����
//	p1 = &val; //p1��ֵ���ı���,����p1ָ����val
//	cout << *p1 << endl;
//
//	*p1 = 0;
//	cout << *p1 << endl;
//
//	//void*ָ��Ƚ��ټ�����
//	double obj = 3.14;
//	double* pd = &obj;
//	void* pv = &obj;
//	pv = pd;
//
//	return 0;
//}