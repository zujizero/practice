#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void arr_rank(int arr[],int sz )
{
	int i = 0;
	for (i = 0; i<sz-1; i++)
	{
		int j = 0;
		for (j = 0; j<i; j++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tem = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tem;
			}
		}
	}
}
int main()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sa = sizeof(arr) / sizeof(arr[0]);
	arr_rank(arr,sa);
	int i = 0;
	for (i = 0; i < sa; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int i = 0;
//	int sa = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <=sa; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	
//	return 0;
//}