//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	//lamdda: [capture list](parameter list)->return type{function body};
//	//lambda必须永远包含capture list和function body
//	auto f = []
//	{
//		return 10;
//	};
//	cout << f() << endl;
//
//	auto f1 = [](const string& s1, const string& s2)
//	{
//		return s1.size() < s2.size();
//	};
//
//	vector<string>s = { "dfjsd","weterytre","sdc","ewfewf","dfewweetregfeg","qw","dfsdtreg","ewfderfdfsdf","asdfg","ctyuj" };
//	sort(s.begin(), s.end(), f1);
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//
//	int i = 10;
//	auto f2 = [i]
//	{
//		return i;
//	};
//	i = 20;
//	auto j = f2(); //lambda的值捕获,可以拷贝原始参数值
//	cout << j << endl;
//
//	int a = 10;
//	auto f3 = [&a]
//	{
//		return a;
//	};
//	a = 20;
//	auto b = f3(); //lambda的引用捕获,保存的是a的引用
//	cout << b << endl;
//
//	system("pause");
//	return 0;
//}