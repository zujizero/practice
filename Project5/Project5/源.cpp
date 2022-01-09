#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************************\n");
	printf("*****     1.play      2.exit     *****\n");
	printf("**************************************\n");
}
void game()
{
	int ret = 0;
	int n = 0;
	ret = rand()%100+1;
	/*printf("%d\n",ret);*/
	
	
	while (1)
	{
		printf("请猜数字>:");
		scanf("%d", &n);
		if (n < ret)
		{
			
			printf("猜小了\n");
			/*scanf("%d", &n);*/
		}
		else if (n>ret)
		{
			printf("猜大了\n");
			/*scanf("%d", &n);*/
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
	{
		int input = 0;
		srand((unsigned)time(NULL));
		do
		{
			menu();
			printf("请选择>:");
			scanf("%d",&input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("请选择正确命令\n");
				break;
			}
		} while (input);
		return 0;
	}
//int main()
//{
//	int p = 0;
//	int n = 0;
//	printf("请猜一个数");
//	scanf("%d", &n);
//	int k = 7;
//	for (;;)
//	{
//		if (n < k)
//		{
//			printf("猜小了\n");
//			printf("请再猜一个数\n");
//			scanf("%d", &n);
//		}
//		else if (n>k)
//		{
//			printf("猜大了\n");
//			printf("请再猜一个数\n");
//			scanf("%d", &n);
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//	return 0;
//}
/*int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	int sa = sizeof(arr) / sizeof(arr[0]);
	int left =0;
	int right = sa-1;
	
	int n = 0;
	scanf("%d", &n);
	for (;left<=right;)
	{
		int mid = (left + right) / 2;
		if (n < arr[mid])
		{
			right = mid-1;
		}
		else if(n>arr[mid])
		{
			left = mid+1;
		}
		else
		{
			printf("找到了，其下标是：%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到");
	return 0;

}*///int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int t = 1;
//	for (i = 1; i <= 9; i ++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			t = i*j;
//			printf("%d*%d=%d\n",i, j,t);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 100;
//	int mun = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int n = 2;
//		for (n = 2;n<=(int)sqrt((double)i); n++)
//		{
//			if (i%n == 0)
//			{
//				break;
//			}
//		}
//		if (n >(int)sqrt((double)i))
//		{
//			mun++;
//			printf("%d ", i);
//		}
//	}
//	printf("\nmun=%d", mun);
//	return 0;
//}