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
//	friend class Student; //��Ԫ��,������teacher����Է���student�������г�Ա����private
//private:
//	string name;
//	string comment;
//};
//
//class Department
//{
//public:
//	friend bool Student::Compare(Student s); //��student��Ա������Ϊ��Ԫ,department��ֻ�ܷ��������Ա����������������
//};
//
//int main()
//{
//
//	system("pause");
//	return 0;
//}