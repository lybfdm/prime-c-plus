//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int val = 10;
//	int* p = &val; //p存放着变量val的地址, 或者说p是指向变量val的指针
//	cout << *p << endl; //由解引用符号* 得到指针p所指的对象, 输出10
//
//	int i = 20;
//	int* p1 = 0; //p被初始化,但没有指向任何对象
//	int* p2 = &i; //p2被初始化,存有i的地址
//	int* p3; //如果p3定义于块内,则p3的值是无法确定的
//
//	p3 = p2; //p3和p2指向同一个对象i
//	cout << *p2 << " " << *p3 << endl;
//
//	p2 = 0; //现在p2不指向任何对象了
//	p1 = &val; //p1的值被改变了,现在p1指向了val
//	cout << *p1 << endl;
//
//	*p1 = 0;
//	cout << *p1 << endl;
//
//	//void*指针比较少见少用
//	double obj = 3.14;
//	double* pd = &obj;
//	void* pv = &obj;
//	pv = pd;
//
//	return 0;
//}