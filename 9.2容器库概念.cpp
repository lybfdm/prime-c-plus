//#include<iostream>
//#include<array>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	array<int, 10>a; //��׼����й̶���С,����һ��arrayʱ,��Ҫָ��������С
//	array<int, 10>b = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	vector<int>a1;
//	vector<int>b1;
//	a = b; //��Ȼ���ܶ������������ͽ��п������߶���ֵ,����array���޴�����
//	swap(a, b); //Ԫ�ؽ���
//	a.swap(b);
//	a1.assign(b1.begin(), b1.end()); //��a1�е�Ԫ���滻Ϊb1�е�����begin��end����ʾ�ķ�Χ�е�Ԫ��
//	a1.assign(10, 1); //��a1�е�Ԫ���滻Ϊ10ֵΪ1��Ԫ��
//
//	a1.size(); //size����������Ԫ�ص���Ŀ
//	a1.empty(); //empty��sizeΪ0ʱ����true����false
//	a1.max_size(); //����һ�����ڻ��ߵ��ڸ����������������ɵ����Ԫ�ص�ֵ,forward_list��֧��size
//
//	vector<int>v1 = { 1,3,5,7,9 };
//	vector<int>v2 = { 1,3,9 };
//	vector<int>v3 = { 1,3,5,7 };
//	vector<int>v4 = { 1,3,5,7,9 };
//	v1 < v2; //true
//	v1 < v3; //false
//	v1 == v4; //true
//	v1 == v2; //false
//	system("pause");
//	return 0;
//}