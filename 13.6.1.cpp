#include<iostream>
#include<utility>
using namespace std;

int main()
{
	int i = 10;
	int& r = i; //r����i
	const int& r2 = i * 10;//��һ��const�����ð󶨵�һ����ֵ��
	int&& r3 = i * 10;//��r3�󶨵�һ����ֵ��
	int&& r4 = 10;
	//������һ����ֵ�����泣��Ϊ��ֵ�����ܽ�һ����ֵ����ֱ�Ӱ󶨵�һ��������

	int&& r5 = move(r4); //move������ʽ�Ľ�һ����ֵת��Ϊ��Ӧ����ֵ��������
	return 0;
}