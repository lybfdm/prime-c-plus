//#include<iostream>
//#include<memory>
//using namespace std;
//
//int main()
//{
//	auto p1 = make_shared<int>(10);
//	weak_ptr<int>p2(p1);
//
//	if (p2.lock()) //lock，如果对象有效，返回指向对象的shared指针，否则返回空shared指针
//	{
//		cout << *p1 << endl; //weak_ptr不能直接访问对象
//	}
//	return 0;
//}