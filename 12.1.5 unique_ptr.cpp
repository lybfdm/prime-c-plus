//#include<iostream>
//#include<memory>
//using namespace std;
//
//int main()
//{
//	unique_ptr<int> p1 = make_unique<int>(10);
//	unique_ptr<int> p2(new int(5));
//	cout << *p1 << " " << *p2 << endl;
//	//unique_ptr不支持普通的拷贝和赋值
//	//unique_ptr<int> p1(p2) 错误
//	//p1=p2 错误
//
//	unique_ptr<int> p3(p1.release());
//	cout << *p3 << endl;
//
//	p3.reset(p2.release());
//	cout << *p3 << endl;
//
//	auto p = p3.release(); //正确，但是记得普通指针要delete
//	delete(p);
//	p = nullptr;
//	return 0;
//}