//#include<iostream>
//#include<forward_list>
//using namespace std;
//
//int main()
//{
//	forward_list<int>fls;
//	for (int i = 0; i < 10; ++i)
//	{
//		fls.push_front(i);
//	}
//	for (auto it = fls.begin(); it != fls.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	fls.insert_after(fls.before_begin(), 10); //insert_after�ǲ���ָ��������֮���λ�ò���Ԫ��,before_begin��ָ��Ԫ��֮ǰ�Ŀյ�����
//	for (auto it = fls.begin(); it != fls.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	fls.insert_after(fls.before_begin(), 10, 2); //10����������,2�������ֵ
//	for (auto it = fls.begin(); it != fls.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//insert_after(p,b,e)���Բ��뷶Χ������������Ԫ��
//
//	fls.erase_after(fls.before_begin());
//	for (auto it = fls.begin(); it != fls.end(); ++it)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//erase_after(b,e)����ɾ����Χ��Ԫ��
//	system("pause");
//	return 0;
//}