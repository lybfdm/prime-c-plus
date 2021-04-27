//#include<iostream>
//#include<vector>
//using namespace std;
//
////容器支持push_front才能使用front_inserter,同理,支持push_back才能使用back_inserter
//int main()
//{
//	vector<int>v1 = { 0,1,2,3,4,5,6,7,8,9 };
//	vector<int>v2;
//	copy(v1.begin(), v1.end(), back_inserter(v2));
//	for (auto it = v2.begin(); it != v2.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	copy(v1.begin(), v1.end(), inserter(v2, v2.begin()));
//	for (auto it = v2.begin(); it != v2.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}