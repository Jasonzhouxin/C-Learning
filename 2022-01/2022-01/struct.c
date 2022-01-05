#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};

int main()
{
	//struct Book b1 = {"C语言程序设计", 55};//利用结构体类型创建该类型的结构体变量
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d\n", b1.price);

	struct Book b1 = { "C语言程序设计", 55 };
	struct Book* pb = &b1;

	strcpy(pb->name, "C++");//string copy字符串拷贝--库函数--string.h

	printf("书名：%s\n", pb->name);
	printf("价格：%d\n", pb->price);
	printf("书名：%s\n", (*pb).name);
	printf("价格：%d\n", (*pb).price);



	return 0;
}