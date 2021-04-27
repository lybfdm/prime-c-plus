//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool isShorter(const string& s1, const string& s2) //二元谓词函数
//{
//	return s1.size() < s2.size();
//}
//
//int main()
//{
//	vector<string>s = { "dfjsd","weterytre","sdc","ewfewf","dfewweetregfeg","qw","dfsdtreg","ewfderfdfsdf","asdfg","ctyuj" };
//	sort(s.begin(), s.end());
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//
//	sort(s.begin(), s.end(), isShorter); //谓词
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//
//	stable_sort(s.begin(), s.end(), isShorter); //重排的同时保证相等长度元素维持原有顺序
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//	system("pause");
//	return 0;
//}