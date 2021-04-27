//#include<iostream>
//#include<forward_list>
//using namespace std;
//
//int main()
//{
//	forward_list<int>fls;
//	for (int i = 0; i < 10; ++i)
//	{
//		fls.push_front(i);
//	}
//	for (auto it = fls.begin(); it != fls.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	fls.insert_after(fls.before_begin(), 10); //insert_after是插入指定迭代器之后的位置插入元素,before_begin是指首元素之前的空迭代器
//	for (auto it = fls.begin(); it != fls.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	fls.insert_after(fls.before_begin(), 10, 2); //10代表插入个数,2代表插入值
//	for (auto it = fls.begin(); it != fls.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//insert_after(p,b,e)可以插入范围内其他容器的元素
//
//	fls.erase_after(fls.before_begin());
//	for (auto it = fls.begin(); it != fls.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//erase_after(b,e)可以删除范围内元素
//	system("pause");
//	return 0;
//}