//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int i = 10;
//	const int ci = i;
//	const int& r1 = ci;
//	cout << r1 << endl;
//
//	const int* p = &ci;
//	cout << *p << endl;
//
//	int val = 20;
//	p = &val; //ָ��p��ֵ���Ըı�,���ǲ���ͨ��ָ��p�ı�val��ֵ
//	cout << *p << endl;
//	//�ͳ�������һ��,ָ������ָ��Ҳû�й涨����ָ�Ķ��������һ������.��νָ������ָ�����Ҫ����ͨ����ָ��ı�����ֵ,��û�й涨�Ǹ������ֵ����ͨ������;���ı�
//
//	int j = 30;
//	int* const p1 = &j; //p1��һֱָ��j
//	const int k = 5;
//	const int* const p2 = &k; //p2��һ��ָ��������ĳ���ָ��
//	cout << *p1 << endl;
//
//	*p1 = 40;
//	cout << *p1 << " " << j << endl;
//	//p1��ַ���ܸı�,���ǿ��Ըı�*p1��j,����p2��ַ����ָ���ֵ�����ɸı�
//
//	const int limit = ci + 1;
//	cout << limit << endl;
//
//	return 0;
//}