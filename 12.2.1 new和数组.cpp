//#include<iostream>
//#include<memory>
//using namespace std;
//
//int main()
//{
//	int* p = new int[10]; //δ��ʼ��
//	int* p1 = new int[10](); //��ʼ��Ϊ0
//	int* p2 = new int[5]{ 0,1,2,3,4 };
//	//���ܴ���һ����СΪ0�ľ�̬���飬���ǿ��Դ�����СΪ0�Ķ�̬����
//	cout << p2[1] << endl;
//
//	unique_ptr<int[]> ap(new int[10]()); //shared_ptr��ֱ��֧�ֹ���̬����
//	for (size_t i = 0; i < 10; i++)
//	{
//		ap[i] = i;
//		cout << ap[i] << " ";
//	}
//	cout << endl;
//	ap.release();
//
//	delete[]p;
//	p = nullptr;
//	return 0;
//}