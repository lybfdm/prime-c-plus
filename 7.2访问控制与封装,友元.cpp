//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string Name,int Age,int Score)
//	{
//		name = Name;
//		age = Age;
//		score = Score;
//	}
//	bool Compare(Person p)
//	{
//		return (score >= p.score) ? true : false;
//	}
//
//	friend string transaction(Person p); //��Ԫ�Ķ���
//private:
//	string name;
//	int age;
//	int score;
//};
//
//string transaction(Person p) //��Ԫ��������,��������֮���Ա�����������⺯�����ܵ���
//{
//	return (p.score >= 90) ? "Excellent" : (p.score >= 80) ? "Good" : (p.score >= 60) ? "Pass" : "Failed";
//}
//
//int main()
//{
//	Person p1 = { "clint",27,85 };
//	Person p2 = { "john",22,100 };
//	bool score = p1.Compare(p2);
//	if (score)
//	{
//		cout << "first person's score is higher" << endl;
//	}
//	else
//	{
//		cout << "second person's score is higher" << endl;
//	}
//
//	cout << transaction(p1) << endl;
//	system("pause");
//	return 0;
//}