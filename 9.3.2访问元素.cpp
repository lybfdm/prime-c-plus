//#include<iostream>
//#include<vector>
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
//	cout << v1.front() << endl; //每个顺序容器都有front
//	cout << v1.back() << endl; //除了forward_list之外的顺序容器都有back
//	cout << v1[5] << endl; //返回下标为n的元素的引用
//	cout << v1.at(4) << endl; //返回下标为n的元素的引用,下标和at操作只适用于string,vector,deque和array
//
//	v1.front() = 19; //front的引用可以改变容器中元素的值
//	cout << v1.front() << endl;
//	auto& v2 = v1.back(); //元素的引用可以改变容器中该元素的值
//	v2 = 10;
//	cout << v1.back() << endl;
//	auto v3 = v1.back(); //非引用,仅仅是一个容器元素的拷贝
//	v3 = 20;
//	cout << v1.back() << endl;
//
//	system("pause");
//	return 0;
//}