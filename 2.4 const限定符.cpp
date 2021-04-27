//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int i = 10;
//	const int ci = i;
//	const int& r1 = ci;
//	cout << r1 << endl;
//
//	const int* p = &ci;
//	cout << *p << endl;
//
//	int val = 20;
//	p = &val; //指针p的值可以改变,但是不能通过指针p改变val的值
//	cout << *p << endl;
//	//和常量引用一样,指向常量的指针也没有规定其所指的对象必须是一个常量.所谓指向常量的指针仅仅要求不能通过该指针改变对象的值,而没有规定那个对象的值不能通过其他途径改变
//
//	int j = 30;
//	int* const p1 = &j; //p1将一直指向j
//	const int k = 5;
//	const int* const p2 = &k; //p2是一个指向常量对象的常量指针
//	cout << *p1 << endl;
//
//	*p1 = 40;
//	cout << *p1 << " " << j << endl;
//	//p1地址不能改变,但是可以改变*p1和j,但是p2地址和其指向的值均不可改变
//
//	const int limit = ci + 1;
//	cout << limit << endl;
//
//	return 0;
//}