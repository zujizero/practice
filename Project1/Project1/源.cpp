#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int line = 0;
	printf("加入比特\n");
	while (line < 200)
	{
		printf("敲一行代码:%d\n",line);
		line++;
	}
	if (line>=200)
	printf("好offer\n");



	/*int input = 0;
	printf("加入比特\n");
	printf("是否好好学习？(1/0)>:");
	scanf("%d\n", &input);
	if (input == 1)
		printf("好offer");
	else
	printf("回家卖红薯");*/
	return 0;
}



