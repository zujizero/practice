#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void arr_rank(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i<sz - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j<sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
				flag = 0;
			}

		}
		if (1 == flag)
			break;
	}
}
int main()
{
	int arr[] = { 10,1,2,4,3,5,6,7,8,9 };
	int sa = sizeof(arr) / sizeof(arr[0]);
	arr_rank(arr, sa);
	int i = 0;
	for (i = 0; i < sa; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}