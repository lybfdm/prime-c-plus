//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<iterator>
//using namespace std;
//
//int main()
//{
//	vector<int>v1 = { 0,0,0,0,0 };
//	vector<int>v2 = { 0,0,0 };
//	vector<int>v3;
//	fill(v1.begin(), v1.end(), 1); //对指定范围迭代器内的元素进行统一重新赋值
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	fill_n(v2.begin(), 3, 1);
//	for (auto it = v2.begin(); it != v2.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	fill_n(back_inserter(v3), 10, 1); //back_inserter创建一个插入迭代器
//	for (auto it = v3.begin(); it != v3.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//auto ret = copy(v2.begin(), v2.end(), v3); //要确保v3元素不能少于v2
//	
//	replace(v1.begin(), v1.end(), 1, 10); //将v1中所有1元素改为10
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//replace_copy拷贝指定容器,修改复制容器内容,原容器元素不变
//
//	system("pause");
//	return 0;
//};