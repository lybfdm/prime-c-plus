//#include<iostream>
//using namespace std;
//
//void print(const int[]) //�����ά�ȱ�ʾ�����������麬�ж���Ԫ��,ʵ���ϲ�һ��Ҫ����.����Ҳ���Եȼ�Ϊconst int*
//{}
//
//void Print(const int* beg, const int* end) //�����������
//{
//	while (beg != end)
//	{
//		cout << *beg++ << endl;
//	}
//}
//
//void print0(int(&arr)[10]) //���������β�,�����Ǳ����
//{
//	for (int elem : arr) //��Χfor���������δȷ����С������
//	{
//		cout << elem << endl;
//	}
//}
//
//void print1(int matrix[][5], int rowsize) //�ȼ���(*matrix)[10]
//{
//	for (int i = 0; i < rowsize; ++i)
//	{
//		for (int j = 0; j < 5; ++j)
//		{
//			cout << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int i = 0;
//	int j[] = { 0,1,2,3,4 };
//	int k[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int m[5][5] = {
//		{0,1,2,3,4},
//		{5,6,7,8,9},
//		{10,11,12,13,14},
//		{15,16,17,18,19},
//		{20,21,22,23,24}
//	};
//	print(&i);
//	print(j);
//	Print(begin(j), end(j));
//	print0(k);
//	print1(m,5);
//	return 0;
//}