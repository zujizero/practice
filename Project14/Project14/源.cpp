#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 1524;
	int* p=&a;
	*p = 1;
	printf("a=%d\n", a);
	printf("%p\n",p);
	return 0;
}