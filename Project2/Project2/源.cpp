
#include <stdio.h>
#include <string.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);
	int* p = &a;
	printf("%p\n", p);
	return 0;
}
//int Max(int x, int y)
//
//#define MAX(a,b) (a>b?a:b)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=MAX(a, b);
//	printf("max=%d\n", max);
//		return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b? a:b);
//	printf("max=%d\n", max);
//	return 0;
//}
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
// {
//	 int num1 = 10;
//	 int num2 = 20;
//	 if (num1>num2)
//		 printf("%d\n",num1);
//	 else
//		 printf("%d\n",num2);
//		 return 0;
//	 }