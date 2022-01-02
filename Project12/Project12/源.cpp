
#include "game.c"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	init_board( mine, ROWS, COLS,'0');
	init_board( show, ROWS, COLS,'*');
	/*display_board( mine, ROW, COL);*/
	display_board(show, ROW, COL);
	setmine(mine, ROW, COL);
	display_board(mine, ROW, COL);
	findmine(mine, show, ROW, COL);
}
void menu()
{
	printf("****************************************************\n");
	printf("*****              1.play   0.exit             *****\n");
	printf("****************************************************\n");
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
		  {
			game();
			break;
		   }
		case 0:
		   {
			   printf("�˳���Ϸ\n");
			   break;
		   }
		default:
			{
			   printf("��������Чֵ\n");
			   break;
			}
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}