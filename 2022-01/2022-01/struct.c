#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ṹ����ʺʹ���
struct Stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};

void Print1(struct Stu tmp)
{
	printf("%s\n", tmp.name);
	printf("%d\n", tmp.age);
	printf("%s\n", tmp.tele);
	printf("%s\n", tmp.sex);
}

void Print2(struct Stu *p)
{
	printf("%s\n", p->name);
	printf("%d\n", p->age);
	printf("%s\n", p->tele);
	printf("%s\n", p->sex);
}

int main()
{
	struct Stu s1 = { "����", 20, "11111111111", "��" };
	Print1(s1);
	Print2(&s1);

	return 0;
}


////Ƕ�׽ṹ��
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[20];
//	struct S s;
//	char *p;
//};
//
//int main()
//{
//	char arr[] = "hello world.";
//	struct T t = { "hello", {100, 'w', "hello boy", 3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%d\n", t.s.a);
//
//	return 0;
//}

//����һ��ѧ����һЩ����
//���������䡢�绰���Ա�
//struct--�ṹ��ؼ��� Stu--�ṹ���ǩ  struct Stu--�ṹ������
//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1 s2 s3�������ṹ��ȫ�ֱ���

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//
//int main()
//{
//	struct Stu s;//s�ǽṹ��ֲ����� 
//	Stu s4 = {"����", 20, "11111111111", "��"};
//
//	return 0;
//}

//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//
//int main()
//{
//	//struct Book b1 = {"C���Գ������", 55};//���ýṹ�����ʹ��������͵Ľṹ�����
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%d\n", b1.price);
//	//b1.price = 15;
//	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
//
//	struct Book b1 = { "C���Գ������", 55 };
//	struct Book* pb = &b1;
//
//	strcpy(pb->name, "C++");//string copy�ַ�������--�⺯��--string.h
//
//	printf("������%s\n", pb->name);
//	printf("�۸�%d\n", pb->price);
//	printf("������%s\n", (*pb).name);
//	printf("�۸�%d\n", (*pb).price);
//
//
//
//	return 0;
//}