//#include<iostream>
//#include<memory>
//using namespace std;
//
//int main()
//{
//	int* p = new int[10]; //未初始化
//	int* p1 = new int[10](); //初始化为0
//	int* p2 = new int[5]{ 0,1,2,3,4 };
//	//不能创建一个大小为0的静态数组，但是可以创建大小为0的动态数组
//	cout << p2[1] << endl;
//
//	unique_ptr<int[]> ap(new int[10]()); //shared_ptr不直接支持管理动态数组
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