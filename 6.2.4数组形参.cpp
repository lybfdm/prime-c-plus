//#include<iostream>
//using namespace std;
//
//void print(const int[]) //这里的维度表示我们期望数组含有多少元素,实际上不一定要符合.函数也可以等价为const int*
//{}
//
//void Print(const int* beg, const int* end) //数组参数传递
//{
//	while (beg != end)
//	{
//		cout << *beg++ << endl;
//	}
//}
//
//void print0(int(&arr)[10]) //数组引用形参,括号是必须的
//{
//	for (int elem : arr) //范围for不允许遍历未确定大小的数组
//	{
//		cout << elem << endl;
//	}
//}
//
//void print1(int matrix[][5], int rowsize) //等价于(*matrix)[10]
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