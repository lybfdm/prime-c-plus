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
//	v1.pop_back(); //array���������������е�ɾ������,forward_list��֧��pop_back����������汾��erase
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	v1.erase(v1.begin() + 3); //erase����ɾ����������ָ����Ԫ��,����һ����ɾ��Ԫ��֮����һ��Ԫ�صĵ�����
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	v1.erase(v1.begin() + 2, v1.end() - 3); //erase����ɾ������������֮���Ԫ��
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
//	s1.pop_front(); //vector,string��֧��pop_front
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