//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector<int>v1;
//	int i = 9;
//	while (i >= 0)
//	{
//		v1.push_back(i);
//		--i;
//	}
//	for (auto it = v1.begin(); it != v1.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	cout << v1.front() << endl; //ÿ��˳����������front
//	cout << v1.back() << endl; //����forward_list֮���˳����������back
//	cout << v1[5] << endl; //�����±�Ϊn��Ԫ�ص�����
//	cout << v1.at(4) << endl; //�����±�Ϊn��Ԫ�ص�����,�±��at����ֻ������string,vector,deque��array
//
//	v1.front() = 19; //front�����ÿ��Ըı�������Ԫ�ص�ֵ
//	cout << v1.front() << endl;
//	auto& v2 = v1.back(); //Ԫ�ص����ÿ��Ըı������и�Ԫ�ص�ֵ
//	v2 = 10;
//	cout << v1.back() << endl;
//	auto v3 = v1.back(); //������,������һ������Ԫ�صĿ���
//	v3 = 20;
//	cout << v1.back() << endl;
//
//	system("pause");
//	return 0;
//}