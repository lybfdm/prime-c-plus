//#include<iostream>
//using namespace std;
//
//class Student
//{
//public:
//	Student(string Name,int Score)
//	{
//		name = Name;
//		score = Score;
//	}
//
//	bool Compare(Student s)
//	{
//		return (score >= s.score) ? true : false;
//	}
//private:
//	string name;
//	int score;
//};
//
//class Teacher
//{
//public:
//	friend class Student; //友元类,则现在teacher类可以访问student类内所有成员包括private
//private:
//	string name;
//	string comment;
//};
//
//class Department
//{
//public:
//	friend bool Student::Compare(Student s); //令student成员函数作为友元,department类只能访问这个成员函数而不是整个类
//};
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}