//#include<iostream>
//#include<memory>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	allocator<int> alloc;
//	vector<int>v = { 9,8,7,6,5 };
//	auto p = alloc.allocate(20); //���䳤�ȱ�����ڵ���construct��ʼ������
//	alloc.construct(p, 1);
//	alloc.construct(p + 1, 2);
//	alloc.construct(p + 2, 3);
//	alloc.construct(p + 3, 4);
//	auto p1 = uninitialized_copy(v.begin(), v.end(), p + 4); //�ú������ص��ǿ�������λ�õ�����
//	auto p2 = uninitialized_copy_n(v.begin(), 3, p1);
//	uninitialized_fill(p2, p2 + 3, 10); //ע��endλ�ò���ֵ
//	uninitialized_fill_n(p2 + 3, 5, 0);
//	
//	for (size_t i = 0; i < 20; i++) 
//	{
//		cout << *(p + i) << endl;
//	}
//
//	for (size_t i = 0; i < 20; i++) //Ϊ�ͷ��ڴ���׼��������Ϊָ������Ԫ����׼��
//	{
//		alloc.destroy(p + i);
//	}
//	alloc.deallocate(p, 20); //��destroyԪ����dellocator�ͷ��ڴ�
//	return 0;
//}