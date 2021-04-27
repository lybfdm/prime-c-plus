//#include<iostream>
//using namespace std;
//
//int print(int i, int j)
//{
//	return i + j;
//}
//
//int (*p)(int i, int j); //想要声明一个可以指向函数的指针,只需要用指针替换函数名即可
//
//int main()
//{
//	p = 0;
//	p = &print; //p指向名为print的函数,取地址符时可选的
//	int a = p(3, 5); //调用print函数,无须解引用
//	int b = (*p)(4, 5); //等价调用
//	int c = print(5, 5); //正常调用
//	cout << a << " " << b << " " << c << endl;
//
//	system("pause");
//	return 0;
//}