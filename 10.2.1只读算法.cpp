//#include<iostream>
//#include<vector>
//#include<numeric>
//#include<algorithm>
//#include<list>
//using namespace std;
//
//int main()
//{
//	vector<int>v1 = { 0,1,2,3,4,5,6,7,8,9 };
//	list<int>s1 = { 0,2,4,6,8,10,1,3,5,7,9 };
//	int sum = accumulate(v1.begin(), v1.end(), 0); //����㷨,���һ������������sum�ĳ�ʼֵΪ0
//	cout << sum << endl;
//
//	vector<int>::iterator result = find(v1.begin(), v1.end(), 9); //�����㷨,���ص���ָ���һ����ӦԪ�صĵ�����
//	cout << *result << endl;
//
//	bool compare = equal(v1.begin(), v1.end(), s1.begin()); //equal����һ���ǳ���Ҫ�ļ���,������ڶ��������������һ������һ����
//	string s = (compare == true) ? "equal" : "not equal";
//	cout << s << endl;
//	system("pause");
//	return 0;
//}