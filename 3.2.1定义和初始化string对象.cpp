//#include<iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s1(10, 'a'); //直接初始化
//	string s2(s1); 
//	string s3 = "clint"; //拷贝初始化
//	//有=的是拷贝,没有的是直接初始化
//
//	string s;
//	getline(cin, s); //使用getline读取一整行
//	if(!s.empty()) //s.empty()返回真假值,空为真,非空为假
//		cout << s << endl;
//
//	int n = s3.size();
//	cout << n << endl;
//
//	char m = s3[4];
//	cout << m << endl;
//
//	for (auto c : s) //新的范围循环方式,for(auto a:b)
//	{
//		cout << c << endl;
//	}
//
//	//利用for循环和引用改变字符串中的字符
//	for (auto& a : s)
//	{
//		a = a + 1;
//	}
//	cout << s << endl;
//	return 0;
//}