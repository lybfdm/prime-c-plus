//#include<iostream>
//using namespace std;
//
//int print(int i, int j)
//{
//	return i + j;
//}
//
//int (*p)(int i, int j); //��Ҫ����һ������ָ������ָ��,ֻ��Ҫ��ָ���滻����������
//
//int main()
//{
//	p = 0;
//	p = &print; //pָ����Ϊprint�ĺ���,ȡ��ַ��ʱ��ѡ��
//	int a = p(3, 5); //����print����,���������
//	int b = (*p)(4, 5); //�ȼ۵���
//	int c = print(5, 5); //��������
//	cout << a << " " << b << " " << c << endl;
//
//	system("pause");
//	return 0;
//}