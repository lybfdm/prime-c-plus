//#include<iostream>
//using namespace std;
//
//int fact(int val)
//{
//	int ret = 1;
//	while (val > 0)
//	{
//		ret = ret * val;
//		--val;
//	}
//	return ret;
//}
//
//void reset(int& i) //普通传值和指针都无法改变实参,但是传引用可以
//{
//	i = 10;
//}
//
//int main()
//{
//	int i;
//	cin >> i;
//	cout << fact(i) << endl;
//	reset(i);
//	cout << i << endl;
//	return 0;
//}