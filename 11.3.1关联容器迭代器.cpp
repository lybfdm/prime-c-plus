//#include<iostream>
//#include<map>
//#include<set>
//using namespace std;
//
//int main()
//{
//	set<int>s1{ 0,1,2,3,4 };
//	map<int, int>m1{ {0,0},{1,1} ,{2,2} ,{3,3} ,{4,4} };
//	auto map_it = m1.begin();
//	cout << map_it->first << " " << map_it->second << endl;
//	map_it->second = 10; //map中first的值不可修改，second的值可以修改
//
//	set<int>::iterator set_it = s1.begin();
//	cout << *set_it << endl; //同样，set迭代器只能只读访问，无法修改值
//	system("pause");
//	return 0;
//}