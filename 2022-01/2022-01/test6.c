#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//�ַ�������
void my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);//����-��ָ֤����Ч��
	assert(src != NULL);
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[] = "#############";
	char arr2[] = "hello";

	my_strcpy(arr1, arr2);

	printf("%s\n", arr1);

	return 0;
}

//���Բ���
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
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

//�ݹ���һ������ÿλ��֮��
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

//�ַ�������
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

////��ӡ�˷��ھ���
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

////��ӡ�����Ƶ�����λ��ż��λ
//void Print(int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//
//	printf("ż��λ��\n");
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


//��������в�ͬλ�ĸ���
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
////дһ��������a�Ķ����ƣ����룩��ʾ���м���1
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

//count_bit_one(unsigned int n)//�����βν����޷���������
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

////������������
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