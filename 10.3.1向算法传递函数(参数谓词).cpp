//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool isShorter(const string& s1, const string& s2) //��Ԫν�ʺ���
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
//	sort(s.begin(), s.end(), isShorter); //ν��
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//
//	stable_sort(s.begin(), s.end(), isShorter); //���ŵ�ͬʱ��֤��ȳ���Ԫ��ά��ԭ��˳��
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << endl;
//	}
//	system("pause");
//	return 0;
//}