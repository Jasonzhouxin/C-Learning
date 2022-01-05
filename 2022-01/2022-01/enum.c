#include<stdio.h>

enum Color
{
	RED,
	BLUE,
	YELLOW
};

int main()
{
	enum Color c = RED;
	c = YELLOW;

	return 0;
}