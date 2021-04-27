//#include<iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	vector<int>v1 = { 1,3,9,4,6,7,2,0,5,8,4,6,9 };
//	sort(v1.begin(), v1.end());
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	vector<int>::iterator end_unique = unique(v1.begin(), v1.end()); //unique返回一个指向不重复值范围末尾的迭代器
//	v1.erase(end_unique, v1.end());
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}