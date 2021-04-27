//#include<iostream>
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass()=default;//初始化对象的非static数据成员, 只能对默认构造函数或拷贝控制成员使用default
//
//	MyClass(const MyClass&) = delete; //通过将拷贝构造函数和拷贝赋值运算符定义为删除的函数来阻止拷贝，deleted function虽然声明了他，但是不能以任何方式使用它们
//	MyClass& operator+(const MyClass&) = delete;//=delete必须出现在函数的第一次声明
//
//	MyClass& operator=(const MyClass&);//重载赋值运算符，通常返回一个指向其左侧运算对象的引用
//
//	~MyClass();//释放对象使用的资源，并销毁对象的非static数据成员，析构函数不能是deleted function
//
//private:
//
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass& MyClass::operator=(const MyClass&)
//{
//	// TODO: 在此处插入 return 语句
//}
//
//MyClass::~MyClass() //无返回值，也不接受参数，对一个给定类，只有唯一一个析构函数
//{
//}
//
//int main()
//{
//
//	return 0;
//}