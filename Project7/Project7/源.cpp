#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int sum = 0;
	scanf("%d",&sum);
	print(sum);
	return 0;
}