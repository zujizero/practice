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
		printf("�������>:");
		scanf("%d", &n);
		if (n < ret)
		{
			
			printf("��С��\n");
			/*scanf("%d", &n);*/
		}
		else if (n>ret)
		{
			printf("�´���\n");
			/*scanf("%d", &n);*/
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
			printf("��ѡ��>:");
			scanf("%d",&input);
			switch (input)
			{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("��ѡ����ȷ����\n");
				break;
			}
		} while (input);
		return 0;
	}
//int main()
//{
//	int p = 0;
//	int n = 0;
//	printf("���һ����");
//	scanf("%d", &n);
//	int k = 7;
//	for (;;)
//	{
//		if (n < k)
//		{
//			printf("��С��\n");
//			printf("���ٲ�һ����\n");
//			scanf("%d", &n);
//		}
//		else if (n>k)
//		{
//			printf("�´���\n");
//			printf("���ٲ�һ����\n");
//			scanf("%d", &n);
//		}
//		else
//		{
//			printf("�¶���\n");
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
			printf("�ҵ��ˣ����±��ǣ�%d", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���");
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