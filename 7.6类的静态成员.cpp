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
//	static double H() //��̬��Ա����ʹ�����ڹ��캯����ʼ��,��Ҫ�����ĺ�������
//	{
//		return height;
//	}
//	static double W() //���ڳ�ʼ��static��Ա��Ҫ����constexpr
//	{
//		return weight;
//	}
//private:
//	string name;
//	int age;
//	static double height; //��ľ�̬��Ա�������κζ���֮��,ÿ��Person����������Ե�name,age,��ֻ����һ��height��weight,������Person������
//	static double weight; //��̬��Ա��������������const
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