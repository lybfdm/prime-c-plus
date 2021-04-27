//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//int main()
//{
//	vector<int>v1;
//	int i = 9;
//	while (i >= 0)
//	{
//		v1.push_back(i);
//		--i;
//	}
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	v1.pop_back(); //array容器不适用于所有的删除操作,forward_list不支持pop_back且他有特殊版本的erase
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	v1.erase(v1.begin() + 3); //erase可以删除迭代器所指定的元素,返回一个被删除元素之后下一个元素的迭代器
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	v1.erase(v1.begin() + 2, v1.end() - 3); //erase可以删除两个迭代器之间的元素
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	list<int>s1;
//	int j = 9;
//	while (j >= 0)
//	{
//		s1.push_back(j);
//		--j;
//	}
//	for (auto it = s1.begin(); it != s1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	s1.pop_front(); //vector,string不支持pop_front
//	for (auto it = s1.begin(); it != s1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	s1.clear();
//
//	system("pause");
//	return 0;
//}