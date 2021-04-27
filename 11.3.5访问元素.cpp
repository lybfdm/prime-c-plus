//#include<iostream>
//#include<map>
//#include<set>
//using namespace std;
//
//int main()
//{
//	set<int>s1 = { 0,1,2,3,4,5 };
//	map<int, int>m1 = { {0,0},{1,1}, {2,2}, {3,3}, {4,4} };
//	auto its = s1.find(5); //返回指向该元素的迭代器
//	auto i = s1.count(3); //返回指定元素在容器内的数量
//	auto its0 = s1.lower_bound(3); //返回第一个关键字不小于3的元素的迭代器，upper_bound反之亦然
//	//lower_bound和upper_bound只适用于有序容器
//	//equal_range返回一个迭代器pair，表示关键字等于k的元素的范围
//	//对map使用find代替下标操作更优，判断返回迭代器和end做对比
//	cout << *its << endl;
//	cout << i << endl;
//	return 0;
//}