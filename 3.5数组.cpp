//#include<iostream>
//using namespace std;
//
//int main()
//{
//	constexpr int a = 10; //�����ǳ������ʽ���ܳ�ʼ������,�����鲻����ʹ��auto
//	string A[a];
//	string B[20];
//
//	const int b = 3;
//	int C[b] = { 0,1,2 };
//	int D[] = { 0,1,2 };
//	int E[10] = { 1,2,3 }; //�ȼ���{1,2,3,0,0}
//	string F[3] = { "clint","fastamp" }; //�ȼ���{ "clint","fastamp","" }
//
//	char a1[] = { 'c',' + ','+' };
//	char a2[] = { 'c','+','+','\0' };
//	char a3[6] = "clint"; //ע���ַ�������ֵ�Ľ�β����һ�����ַ�
//
//	int* ptrs[10]; //����10������ָ�������
//	int(*parray)[10] = &E; //parrayָ��һ������10������������
//	int(&arrref)[10] = E; //arrref����һ������10������������
//	int* (&arry)[10] = ptrs; //arry������һ������10������ָ�������
//
//	int score[11] = {};
//	int grade;
//	int i = 1;
//	while (cin >> grade && i < 10)
//	{
//		if (grade <= 100)
//		{
//			score[grade / 10]++;
//		}
//		i++;
//	}
//	for (auto j : score)
//	{
//		cout << j << " ";
//	}
//	cout << endl;
//	return 0;
//}