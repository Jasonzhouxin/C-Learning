#include<stdio.h>

int main()
{
	int i = 0;

	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d\n", i);
	}

	return 0;
}