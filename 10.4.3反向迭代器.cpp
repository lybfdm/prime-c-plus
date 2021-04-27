//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	vector<int>v1 = { 9,8,7,6,5,4,3,2,1,0 };
//	for (auto it = v1.rbegin(); it != v1.rend(); ++it) //除了forward_list,所有容器都支持反向迭代器
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	sort(v1.begin(), v1.end());
//	for (auto it = v1.rbegin(); it != v1.rend(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	sort(v1.rbegin(), v1.rend());
//	for (auto it = v1.rbegin(); it != v1.rend(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}