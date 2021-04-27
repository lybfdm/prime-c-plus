//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	string nums[] = { "one","two","three" };
//	string* p = nums; //p指向nums的第一个元素,等价于&nums[0]
//
//	int a[] = { 0,1,2,3,4 };
//	auto a1(a); //可知此时a1是指针
//
//	int* beg = begin(a); //类似于vector的成员函数,注意end尾针不能执行解引用和递增操作
//	int* last = end(a);
//
//	int* p1 = a + 5; //指针的运算
//	int n = end(a) - begin(a); //同一数组两个指针之间的距离
//
//	int m = *(a + 4); //解引用
//	cout << m << endl;
//
//	int* p2 = &a[2];
//	int i = p2[1]; //等价于*(p+1)
//	int j = p2[-2];
//	cout << i << " " << j << endl;
//
//	string s = "hello world";
//	const char* str = s.c_str(); //利用c_str函数可以把string对象与C风格字符串换用
//
//	vector<int>ivec(begin(a), end(a)); //允许使用数组来初始化vector对象,vector中一共5个元素,0,1,2,3,4
//	vector<int>subvec(a[0], a[2]); //也可以是数组的子集
//	return 0;
//}