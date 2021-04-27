//#include<iostream>
//#include<memory>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	allocator<int> alloc;
//	vector<int>v = { 9,8,7,6,5 };
//	auto p = alloc.allocate(20); //分配长度必须大于等于construct初始化个数
//	alloc.construct(p, 1);
//	alloc.construct(p + 1, 2);
//	alloc.construct(p + 2, 3);
//	alloc.construct(p + 3, 4);
//	auto p1 = uninitialized_copy(v.begin(), v.end(), p + 4); //该函数返回的是拷贝完后的位置迭代器
//	auto p2 = uninitialized_copy_n(v.begin(), 3, p1);
//	uninitialized_fill(p2, p2 + 3, 10); //注意end位置不赋值
//	uninitialized_fill_n(p2 + 3, 5, 0);
//	
//	for (size_t i = 0; i < 20; i++) 
//	{
//		cout << *(p + i) << endl;
//	}
//
//	for (size_t i = 0; i < 20; i++) //为释放内存做准备，或者为指定其他元素做准备
//	{
//		alloc.destroy(p + i);
//	}
//	alloc.deallocate(p, 20); //先destroy元素再dellocator释放内存
//	return 0;
//}