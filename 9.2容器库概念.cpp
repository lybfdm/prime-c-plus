//#include<iostream>
//#include<array>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	array<int, 10>a; //标准库具有固定大小,定义一个array时,需要指定容器大小
//	array<int, 10>b = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	vector<int>a1;
//	vector<int>b1;
//	a = b; //虽然不能对内置数组类型进行拷贝或者对象赋值,但是array并无此限制
//	swap(a, b); //元素交换
//	a.swap(b);
//	a1.assign(b1.begin(), b1.end()); //将a1中的元素替换为b1中迭代器begin和end所表示的范围中的元素
//	a1.assign(10, 1); //将a1中的元素替换为10值为1的元素
//
//	a1.size(); //size返回容器中元素的数目
//	a1.empty(); //empty在size为0时返回true否则false
//	a1.max_size(); //返回一个大于或者等于该类型容器所能容纳的最大元素的值,forward_list不支持size
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