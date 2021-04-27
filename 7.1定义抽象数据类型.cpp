//#include<iostream>
//using namespace std;
//
//struct Person
//{
//	//类内成员变量
//	string name;
//	int age;
//	double height;
//	double weight;
//
//	Person() = default; //默认构造函数
//
//	string adult(int Age) //类内成员函数
//	{
//		return (age > Age) ? "older" : (age == Age) ? "equal" : "younger";
//	}
//
//	string health(double Height, double Weight); //函数声明
//};
//
//string Person::health(double Height, double Weight) //在类的外部定义成员函数,需要与类内声明一致
//{
//	return ((weight / height / height) < (Weight / Height / Height)) ? "more healthy" : ((weight / height / height) == (Weight / Height / Height)) ? "equal healthy" : "less healthy";
//}
//
//Person change_metric(Person p) //定义类相关的非成员函数
//{
//	Person p0;
//	p0.height = p.height / 30.48 * 100;
//	p0.weight = p.weight / 0.4536;
//	return p0;
//}
//
//int main()
//{
//	Person p1{ "clint",27,1.75,65.0 };
//	Person p2{ "susan",17,1.60,60.0 };
//	cout << p1.adult(p2.age) << endl;
//	cout << p1.health(p2.height, p2.weight) << endl;
//	cout << change_metric(p1).height << " " << change_metric(p1).weight << endl;
//	system("pause");
//	return 0;
//}