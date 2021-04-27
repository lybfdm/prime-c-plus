#include<iostream>
#include<utility>
using namespace std;

int main()
{
	int i = 10;
	int& r = i; //r引用i
	const int& r2 = i * 10;//将一个const的引用绑定到一个右值上
	int&& r3 = i * 10;//将r3绑定到一个右值上
	int&& r4 = 10;
	//变量是一种左值，字面常量为右值，不能将一个右值引用直接绑定到一个变量上

	int&& r5 = move(r4); //move可以显式的将一个左值转换为对应的右值引用类型
	return 0;
}