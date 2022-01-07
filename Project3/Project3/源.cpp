#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		 break;
	case 6:
	case 7:
		 printf("休息日\n");
		  break;
	}
	return 0;
}//int main()
//{
//	int n = 1;
//	while (n <= 100)
//	{
//		if (n%2==1)
//		printf("%d\n", n);
//		n++;
//	}
//	return 0;
//}/*int main()
/*{
	int a = 0;
	int b = 2;
	if (a == 1);
	    if (b == 2)
		printf("hehe\n");
	    else
		printf("haha\n");
	return 0;
}**////struct Book
//{
//	char name[14];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计", 55 };
//	printf("书名:%s\n", b1.name);
//	printf("价格:%d\n", b1.price);
//	b1.price = 15;
//	printf("促销价格：%d\n",b1.price);
//	struct Book *pd = &b1;
//	printf("%s\n", pd->name);
//
//	return 0;
//}


