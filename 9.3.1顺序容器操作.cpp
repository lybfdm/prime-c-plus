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
//		v1.push_back(i); //����array��forward_list֮�⣬ÿ��˳��������֧��push_back
//		--i;
//	}
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	v1.insert(v1.end(), -1); //vector,deque,list��string֧��insert��forward_list���Լ���insert
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	list<int>s1;
//	int j = 9;
//	while (j >= 0)
//	{
//		s1.push_front(j); //list��forward_list��deque����֧��push_front
//		--j;
//	}
//	for (list<int>::iterator it = s1.begin(); it != s1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	s1.insert(s1.end(), 5, 10);
//	for (list<int>::iterator it = s1.begin(); it != s1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	s1.insert(s1.begin(), v1.end() - 5, v1.end());
//	for (list<int>::iterator it = s1.begin(); it != s1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}