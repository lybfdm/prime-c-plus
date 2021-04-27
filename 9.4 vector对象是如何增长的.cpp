//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int>v1;
//	v1.reserve(10); //预先分配至少能容纳10个元素的内存空间
//	cout << v1.capacity() << endl; //不重新分配内存空间的话,v1可以保存多少元素
//	//reserve和capacity只适用于vector和string
//
//	v1.resize(5);
//	cout << v1.capacity() << endl;
//	v1.shrink_to_fit(); //将capacity减少为与size相同大小,只适用于vector,string和deque
//	cout << v1.capacity() << endl;
//	system("pause");
//	return 0;
//}