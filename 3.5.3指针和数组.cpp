//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	string nums[] = { "one","two","three" };
//	string* p = nums; //pָ��nums�ĵ�һ��Ԫ��,�ȼ���&nums[0]
//
//	int a[] = { 0,1,2,3,4 };
//	auto a1(a); //��֪��ʱa1��ָ��
//
//	int* beg = begin(a); //������vector�ĳ�Ա����,ע��endβ�벻��ִ�н����ú͵�������
//	int* last = end(a);
//
//	int* p1 = a + 5; //ָ�������
//	int n = end(a) - begin(a); //ͬһ��������ָ��֮��ľ���
//
//	int m = *(a + 4); //������
//	cout << m << endl;
//
//	int* p2 = &a[2];
//	int i = p2[1]; //�ȼ���*(p+1)
//	int j = p2[-2];
//	cout << i << " " << j << endl;
//
//	string s = "hello world";
//	const char* str = s.c_str(); //����c_str�������԰�string������C����ַ�������
//
//	vector<int>ivec(begin(a), end(a)); //����ʹ����������ʼ��vector����,vector��һ��5��Ԫ��,0,1,2,3,4
//	vector<int>subvec(a[0], a[2]); //Ҳ������������Ӽ�
//	return 0;
//}