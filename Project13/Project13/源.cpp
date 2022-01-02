#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char b = 'c';
	char* p = &b;
	printf("%d\n",sizeof(p));
	return 0;
}