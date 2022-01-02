#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void init_board(char board[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for (i = 1; i < row; i++)
	{
		for (j = 1; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = ease_count;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1]) - 8 * '0';
}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col - ease_count)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				display_board(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count - '0';
				display_board(show, row, col);
				win++;
			}
		}
		else
		{
			printf("��������Ƿ�������������\n");
		}
	   }
	if (win == row*col - ease_count)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
	}
 }


