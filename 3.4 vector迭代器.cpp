//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string s("hello world");
//	if (s.begin() != s.end()) //��ָ�벻һ������,��ȡ����������ʹ��ȡ��ַ��&
//	{
//		string::iterator it = s.begin();
//		*it = toupper(*it);
//		int i = s.end() - s.begin();
//		cout << i << endl;
//	}
//
//	for (string::iterator it = s.begin(); it != s.end(); it++) //vector�ĵ�������vector<int>::iterator
//	{
//		*it = toupper(*it);
//	}
//	cout << s << endl;
//
//	vector<int>v{3,43,21,82,98,16,28,54,87,90,71,54,6,9,4};
//	sort(v.begin(), v.end());
//
//	auto beg = v.begin(), end = v.end(); //��������ǰ������������
//	auto mid = beg + (end - beg) / 2;
//	int target;
//	cin >> target;
//	while (mid != end && *mid != target)
//	{
//		if (target <= *mid)
//		{
//			end = mid;
//		}
//		else
//		{
//			beg = mid + 1;
//		}
//		mid = beg + (end - beg) / 2;
//	}
//
//	if (mid == end) 
//	{
//		cout << "no result" << endl;
//	}
//	else
//	{
//		cout << "target exists" << endl;
//	}
//	return 0;
//}