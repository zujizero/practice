#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void print(int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d", x % 10);
}
int main()
{
	unsigned int sum = 0;
	scanf("%d", sum);
	print(sum);
	return 0;
}
//int is_prime(int x)
//{
//	int n = 2;
//	for (n = 2; n <= (int)sqrt((double)x); n++)
//	{
//		if (x%n == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int tex(int x)
//{
//	int n = 2;
//	for (n = 2; n <= x; n++)
//	{
//		if (x%n == 0)
//		{
//			return 0;
//		}
//		else if (n == x)
//		{
//			return 1;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("请输入一个数>:");
//	scanf("%d", a);
//	int b = tex(a);
//	if (b == 0)
//		printf("是素数");
//	else
//		printf("不是素数");
//	return 0;
//}
//void imp(x);
//{
//}
//int main()
//{
//	int t = 0;
//	scanf("%d", t);
//	int f = imp(t);
//	return 0;
//}
//void swap(int* x, int* y)
//{
//	int tem = 0;
//	tem = *x;
//	*x = *y;
//	*y = tem;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//void swap(int a,int b)
//{
//	int tem = 0;
//	tem = a;
//	a = b;
//	b = a;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int batter(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int put = batter(a, b);
//	printf("%d", put);
//	return 0;
//}
//int main()
//{
//	char input[20] = {};
//	system("shutdown - s - t 60");
//
//
//	while (1)
//	{
//		printf("请注意，你的电脑将在60秒后关机，若想停止关机请输入我是猪\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//
//	}
//	return 0;
//}