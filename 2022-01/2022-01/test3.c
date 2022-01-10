//#define 
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "WELCOME TO C!!!";
	char arr2[] = "###############";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) -2;//-2--×Ö·û´®½áÊø·û'\0'
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(100);
		system("cls");
		left++;
		right--;
	}

	return 0;
}