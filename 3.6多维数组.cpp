//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[3][4] = {
//		{0,1,2,3},
//		{4,5,6,7},
//		{8,9,10,11}
//	}; //����Ԫ��,ÿ��Ԫ�ض��Ǵ�СΪ4������,�ڲ������Ų��Ǳ���
//
//	int arr[10][20][30] = { 0 };
//
//	arr[0][0][0] = a[2][3];
//	cout << arr[0][0][0] << endl;
//
//	//int(&row)[4] = a[1]; //row������a�еڶ���4��Ԫ������
//
//	int b = 1;
//	for (auto& row : a) //��������ʼ��
//	{
//		for (auto& col : row) //�ڲ������ʼ��
//		{
//			col = b;
//			b++;
//		}
//	}
//	for (auto& row : a) //ʹ�÷�Χfor��䴦���ά����,�������ڲ��ѭ������,��������ѭ���Ŀ��Ʊ�����Ӧ������������,���ڲ�Ҳ��������������
//		for (auto& col : row)
//			cout << col << endl;
//
//	for (auto p = begin(a); p != end(a); p++)
//	{
//		for (auto q = begin(*p); q != end(*p); q++)
//		{
//			cout << *q << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}