#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct Book
{
	char name[20];//C���Գ������
	short price;//55
};

int main()
{
	//struct Book b1 = {"C���Գ������", 55};//���ýṹ�����ʹ��������͵Ľṹ�����
	//printf("������%s\n", b1.name);
	//printf("�۸�%d\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%d\n", b1.price);

	struct Book b1 = { "C���Գ������", 55 };
	struct Book* pb = &b1;

	strcpy(pb->name, "C++");//string copy�ַ�������--�⺯��--string.h

	printf("������%s\n", pb->name);
	printf("�۸�%d\n", pb->price);
	printf("������%s\n", (*pb).name);
	printf("�۸�%d\n", (*pb).price);



	return 0;
}