#include<stdio.h>

#define MAX 1000//define�����ʶ������

//�������巽ʽ
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//�궨�巽ʽ
#define MAX(X, Y) (X>Y)?X:Y

int main()
{
//	int a = MAX;
	int a = 20;
	int b = 10;
	int max = Max(a, b);
	printf("���ֵΪ %d\n", max);

	max = MAX(a, b);
	printf("���ֵΪ %d\n", max);

	return 0;
}