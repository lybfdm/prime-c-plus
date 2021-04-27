//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int val = 10;
//	int* p;
//	p = &val; //p指向一个int型的数
//	int** p1 = &p; //p1指向一个int型的指针
//
//	cout << val << "\n" << *p << "\n" << **p1 << endl;
//
//	int i = 20;
//	int* p2; 
//	int*& r = p2; //r是一个对指针p的引用
//
//	r = &i; //r引用了一个指针,因此给r赋值&i就是令p指向i
//	cout << *p2 << endl;
//	*r = 0;
//	cout << i << endl;
//	cout << *p2 << endl;
//	return 0;
//}