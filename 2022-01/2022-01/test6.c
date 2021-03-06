#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

//bubble_sort回调函数
struct Std
{
	char name[20];
	int age;
};

int cmp(const void* e1, const void* e2)
{
	return ((struct Std*)e1)->age - ((struct Std*)e2)->age;
}

void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if ((cmp((char*)base+j*width, (char*)base + (j + 1)*width) > 0))
			{
				swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

void test()
{
	struct Std s[3] = { {"zhangsan", 20} ,{"lisi", 10},{"wangwu", 30} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp);
}

int main()
{
	test();

	return 0;
}

////qsort使用
//int cmp_float(const void* e1, const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//
//void test1()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f\n", f[i]);
//	}
//}
//
//struct Std
//{
//	char name[20];
//	int age;
//};
//
//int cmp_std_by_age(const void* e1, const void* e2)
//{
//	return ((struct Std*)e1)->age - ((struct Std*)e2)->age;
//}
//
//void test2()
//{
//	struct Std s[3] = { {"zhangsan", 20} ,{"lisi", 10},{"wangwu", 30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_std_by_age);
//}
//
//int cmp_std_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Std*)e1)->name, ((struct Std*)e2)->name);
//}
//
//void test3()
//{
//	struct Std s[] = { {"zhangsan", 20} ,{"lisi", 10},{"wangwu", 30} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_std_by_name);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//
//	return 0;
//}

////函数指针数组--计算器
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("**********************\n");
//	printf("****1.add    2.sub****\n"); 
//	printf("****3.mul    4.div****\n");
//	printf("****** 0.exit ********\n");
//	printf("**********************\n");
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		int a = 0;
//		int b = 0;
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//
//		if (input>=1 && input<=4)
//		{
//			printf("请输入两个数：");
//			scanf("%d %d", &a, &b);
//			int(*pArr[])(int x, int y) = { 0, add, sub, mul, div };
//			int ret = pArr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			exit(-1);
//		}
//		else
//		{
//			printf("输入有误。\n");
//		}	
//	} while (input);
//
//	return 0;
//}

//函数指针
//void Print(char * str)
//{
//	printf("%s", str);
//}
//
//int main()
//{
//	void (*p)(char *) = Print;
//	(*p)("hello world.");
//
//	return 0;
//}

////数组指针用法
//void print(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p+i)+j));
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//
//	print(arr, 3, 5);
//
//	return 0;
//}

//检测系统是大端存储还是小端储存
//int check_sys()
//{
//	int i = 0;
//	return (*(char*)&i);
//}
//
//int main()
//{
//	int ret = check_sys();
//
//	if (ret == 1)
//	{
//		printf("大端\n");
//	}
//	else
//	{
//		printf("小端\n");
//	}
//
//	return 0;
//}

//字符串拷贝
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);//断言-保证指针有效性
//	assert(src != NULL);
//	将src指向的字符串拷贝到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "#############";
//	char arr2[] = "hello";
//
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//调试测试
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//递归实现n的k次方
//double Pow(int n, int k)
//{
//	//n^k = n*n^(k-1)
//	if (k < 0)
//		return (1.0 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	
//	double ret = Pow(n,k);
//	printf("%lf", ret);
//
//	return 0;
//}

//递归求一个数字每位数之和
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//
//	int ret = DigitSum(num);
//	printf("%d", ret);
//
//	return 0;
//}

//字符串逆序
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{
//	int len = my_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//
//	arr[len - 1] = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//
//	return 0;
//}

////打印乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	print_table(n);
//
//	return 0;
//}

////打印二进制的奇数位和偶数位
//void Print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Print(n);
//
//	return 0;
//}


//求二进制中不同位的个数
//count_bit_diff(int m, int n)
//{
//	int tmp = m ^ n;
//	return count_bit_one(tmp);
//}
//
//
////count_bit_diff(int m, int n)
////{
////	int tmp = m ^ n;
////	int i = 0;
////	int count = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (((tmp >> i) & 1) == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m,&n);
//
//	int count = count_bit_diff(m, n);
//
//	printf("%d\n", count);
//
//	return 0;
//}
//
////写一个函数求a的二进制（补码）表示中有几个1
//count_bit_one(int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//count_bit_one(unsigned int n)//函数形参接收无符号整型数
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int count = count_bit_one(a);
//
//	printf("%d", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	short* p = (short*)&a;
//
//	*p = 0;
//
//	printf("%x", a);
//
//}

////交换两个数组
//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0;
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int temp = 0;
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
////	init(arr, sz);
//	Print(arr, sz);
//	reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}