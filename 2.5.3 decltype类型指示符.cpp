//#include<iostream>
//using namespace std;
//
//int main()
//{
//	const int ci = 10;
//	const int& cj = ci;
//
//	decltype(ci)x = 0; //ci������const int, ����x����Ҳ��
//	decltype(cj)y = x; //cj������const int&, ����yҲ�ǰ󶨵�x
//
//	cout << ci << " " << cj << endl;
//	cout << x << " " << y << endl;
//
//	int i = 20, * p = &i, & r = i;
//	decltype(r + 1)a; //r��һ������,����ʹ����Ҫ��ʼ��,�������r+1��Ϊһ�����ʽ��һ����,������һ�������ֵ������һ������,���Բ��ó�ʼ��
//	decltype(*p)b = i; //�����ò���,��decltype�����õ��������Ͷ���int����
//
//	a = 30;
//	b = 40;
//
//	cout << a << " " << b << " " << r << " " << *p << endl;
//	//decltype((variable))˫���ŵĽ�����Զ������,�����Ż����variable�������
//	return 0;
//}