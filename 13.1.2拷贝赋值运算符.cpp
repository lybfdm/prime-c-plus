//#include<iostream>
//using namespace std;
//
//class MyClass
//{
//public:
//	MyClass()=default;//��ʼ������ķ�static���ݳ�Ա, ֻ�ܶ�Ĭ�Ϲ��캯���򿽱����Ƴ�Աʹ��default
//
//	MyClass(const MyClass&) = delete; //ͨ�����������캯���Ϳ�����ֵ���������Ϊɾ���ĺ�������ֹ������deleted function��Ȼ�������������ǲ������κη�ʽʹ������
//	MyClass& operator+(const MyClass&) = delete;//=delete��������ں����ĵ�һ������
//
//	MyClass& operator=(const MyClass&);//���ظ�ֵ�������ͨ������һ��ָ�������������������
//
//	~MyClass();//�ͷŶ���ʹ�õ���Դ�������ٶ���ķ�static���ݳ�Ա����������������deleted function
//
//private:
//
//};
//
//MyClass::MyClass()
//{
//}
//
//MyClass& MyClass::operator=(const MyClass&)
//{
//	// TODO: �ڴ˴����� return ���
//}
//
//MyClass::~MyClass() //�޷���ֵ��Ҳ�����ܲ�������һ�������ֻ࣬��Ψһһ����������
//{
//}
//
//int main()
//{
//
//	return 0;
//}