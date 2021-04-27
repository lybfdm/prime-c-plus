//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string Name, int Age)
//	{
//		name = Name;
//		age = Age;
//	}
//
//	static double H() //静态成员不能使用类内构造函数初始化,需要单独的函数处理
//	{
//		return height;
//	}
//	static double W() //类内初始化static成员需要加上constexpr
//	{
//		return weight;
//	}
//private:
//	string name;
//	int age;
//	static double height; //类的静态成员存在于任何对象之外,每个Person对象包含各自的name,age,但只存在一个height和weight,被所有Person对象共享
//	static double weight; //静态成员函数不能声明成const
//};
//
//double Person::height = 1.76;
//double Person::weight = 65.0;
//
//int main()
//{
//	Person p{ "clint",27 };
//	cout << p.H() << " " << p.W() << endl;
//	
//	system("pause");
//	return 0;
//}