//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[3][4] = {
//		{0,1,2,3},
//		{4,5,6,7},
//		{8,9,10,11}
//	}; //三个元素,每个元素都是大小为4的数组,内部花括号不是必须
//
//	int arr[10][20][30] = { 0 };
//
//	arr[0][0][0] = a[2][3];
//	cout << arr[0][0][0] << endl;
//
//	//int(&row)[4] = a[1]; //row引用了a中第二个4个元素数组
//
//	int b = 1;
//	for (auto& row : a) //外层数组初始化
//	{
//		for (auto& col : row) //内层数组初始化
//		{
//			col = b;
//			b++;
//		}
//	}
//	for (auto& row : a) //使用范围for语句处理多维数组,除了最内层的循环体外,其他所有循环的控制变量都应该是引用类型,最内层也可以是引用类型
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