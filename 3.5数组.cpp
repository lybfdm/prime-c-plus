//#include<iostream>
//using namespace std;
//
//int main()
//{
//	constexpr int a = 10; //必须是常量表达式才能初始化数组,且数组不允许使用auto
//	string A[a];
//	string B[20];
//
//	const int b = 3;
//	int C[b] = { 0,1,2 };
//	int D[] = { 0,1,2 };
//	int E[10] = { 1,2,3 }; //等价于{1,2,3,0,0}
//	string F[3] = { "clint","fastamp" }; //等价于{ "clint","fastamp","" }
//
//	char a1[] = { 'c',' + ','+' };
//	char a2[] = { 'c','+','+','\0' };
//	char a3[6] = "clint"; //注意字符串字面值的结尾处有一个空字符
//
//	int* ptrs[10]; //含有10个整型指针的数组
//	int(*parray)[10] = &E; //parray指向一个含有10个整数的数组
//	int(&arrref)[10] = E; //arrref引用一个含有10个整数的数组
//	int* (&arry)[10] = ptrs; //arry引用了一个含有10个整型指针的数组
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