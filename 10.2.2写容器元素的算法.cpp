//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<iterator>
//using namespace std;
//
//int main()
//{
//	vector<int>v1 = { 0,0,0,0,0 };
//	vector<int>v2 = { 0,0,0 };
//	vector<int>v3;
//	fill(v1.begin(), v1.end(), 1); //��ָ����Χ�������ڵ�Ԫ�ؽ���ͳһ���¸�ֵ
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	fill_n(v2.begin(), 3, 1);
//	for (auto it = v2.begin(); it != v2.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	fill_n(back_inserter(v3), 10, 1); //back_inserter����һ�����������
//	for (auto it = v3.begin(); it != v3.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//auto ret = copy(v2.begin(), v2.end(), v3); //Ҫȷ��v3Ԫ�ز�������v2
//	
//	replace(v1.begin(), v1.end(), 1, 10); //��v1������1Ԫ�ظ�Ϊ10
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//replace_copy����ָ������,�޸ĸ�����������,ԭ����Ԫ�ز���
//
//	system("pause");
//	return 0;
//};