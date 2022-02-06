#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//结构体访问和传参
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
	struct Stu s1 = { "张三", 20, "11111111111", "男" };
	Print1(s1);
	Print2(&s1);

	return 0;
}


////嵌套结构体
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

//描述一个学生的一些数据
//姓名、年龄、电话、性别
//struct--结构体关键字 Stu--结构体标签  struct Stu--结构体类型
//struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1 s2 s3是三个结构体全局变量

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
//	struct Stu s;//s是结构体局部变量 
//	Stu s4 = {"张三", 20, "11111111111", "男"};
//
//	return 0;
//}

//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//
//int main()
//{
//	//struct Book b1 = {"C语言程序设计", 55};//利用结构体类型创建该类型的结构体变量
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d\n", b1.price);
//	//b1.price = 15;
//	//printf("修改后的价格：%d\n", b1.price);
//
//	struct Book b1 = { "C语言程序设计", 55 };
//	struct Book* pb = &b1;
//
//	strcpy(pb->name, "C++");//string copy字符串拷贝--库函数--string.h
//
//	printf("书名：%s\n", pb->name);
//	printf("价格：%d\n", pb->price);
//	printf("书名：%s\n", (*pb).name);
//	printf("价格：%d\n", (*pb).price);
//
//
//
//	return 0;
//}