//#include<iostream>
//#include<vector>
//#include<numeric>
//#include<algorithm>
//#include<list>
//using namespace std;
//
//int main()
//{
//	vector<int>v1 = { 0,1,2,3,4,5,6,7,8,9 };
//	list<int>s1 = { 0,2,4,6,8,10,1,3,5,7,9 };
//	int sum = accumulate(v1.begin(), v1.end(), 0); //求和算法,最后一个参数是设置sum的初始值为0
//	cout << sum << endl;
//
//	vector<int>::iterator result = find(v1.begin(), v1.end(), 9); //查找算法,返回的是指向第一个相应元素的迭代器
//	cout << *result << endl;
//
//	bool compare = equal(v1.begin(), v1.end(), s1.begin()); //equal基于一个非常重要的假设,它假设第二个序列至少与第一个序列一样长
//	string s = (compare == true) ? "equal" : "not equal";
//	cout << s << endl;
//	system("pause");
//	return 0;
//}