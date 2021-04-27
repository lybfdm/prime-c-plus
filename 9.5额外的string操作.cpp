//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s = "hello world";
//	string s1(s, 5); //从第5个字符开始拷贝
//	cout << s1 << endl;
//	string s2(s, 4, 4); //从第4个字符开始拷贝4个字符结束
//	cout << s2 << endl;
//
//	s.insert(s.size(), 3, '!'); //在s结尾加入3个感叹号
//	cout << s << endl;
//
//	s.erase(s.size() - 9, 8); //从size()-9开始删除8个字符
//	cout << s << endl;
//
//	s.append("!!"); //在s结尾加入字符串
//	cout << s << endl;
//
//	s.replace(0, 5, "world"); //等价替换,从0位开始,删除5个,替换成world
//	cout << s << endl;
//
//	cout << s.substr(0, 5) << endl;
//
//	auto pos = s.find("!!!");
//	cout << pos << endl;
//
//	cout << s.compare(s1) << endl;
//
//	system("pause");
//	return 0;
//}