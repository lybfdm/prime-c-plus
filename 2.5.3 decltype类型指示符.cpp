//#include<iostream>
//using namespace std;
//
//int main()
//{
//	const int ci = 10;
//	const int& cj = ci;
//
//	decltype(ci)x = 0; //ci类型是const int, 所以x类型也是
//	decltype(cj)y = x; //cj类型是const int&, 所以y也是绑定到x
//
//	cout << ci << " " << cj << endl;
//	cout << x << " " << y << endl;
//
//	int i = 20, * p = &i, & r = i;
//	decltype(r + 1)a; //r是一个引用,单独使用需要初始化,但是如果r+1作为一个表达式的一部分,则结果是一个具体的值而不是一个引用,可以不用初始化
//	decltype(*p)b = i; //解引用操作,在decltype这里会得到引用类型而非int类型
//
//	a = 30;
//	b = 40;
//
//	cout << a << " " << b << " " << r << " " << *p << endl;
//	//decltype((variable))双括号的姐结果永远是引用,单括号会根据variable本身决定
//	return 0;
//}