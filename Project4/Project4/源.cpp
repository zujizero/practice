#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int i = 100;
	for (i = 100; i <= 200; i++)
	{
		int n = 2;
		for (n = 2; n <= i; n++)
		{
			if (i%n == 0)
				break;
		}
		if (n == i)
			printf("%d ", i);
	}

	return 0;
}
//int main()
//{
//	int i = 1000;
//	int mun = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			mun++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\nmun=%d", mun);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	while (m%n)
//	{
//		int mut = m%n;
//		m = n;
//		n = mut;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = 0;
//	if (m>n)
//	{
//		tmp = m%n;
//		if (tmp == 0)
//	        printf("%d", n);
//	    else
//		    printf("%d", tmp);
//	}
//	else
//	{
//		tmp = n%m;
//		if (tmp == 0)
//			printf("%d", n);
//		else
//			printf("%d", tmp);
//	}
//	return 0;
//int main()
//{
//	int mun = 0;
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			mun++;
//			printf("%d ", i);
//		}
//	}
//	printf("\nmut=%d", mun);
//	return 0;
//}
//int main()
//{
//	int a;
//	
//int b;
//	int c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int t = 0;
//	int f = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		f = f*n;
//		t = t + f;
//	}
//	printf("%d\n", t);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d\n", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
////int main()
//{
//	int i=11;
//	for (i = 1; i <= 10; i++)
//	{
		//printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int bt = 0;
//	int ret = 0;
//	char ch[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%d", ch);
//	while ((bt = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认Y/N:");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("取消确认\n");
//	
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (5 == i)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}