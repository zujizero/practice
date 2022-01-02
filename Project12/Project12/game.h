#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ease_count 80
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void init_board(char board[ROWS][COLS], int row, int col,char set);
void display_board(char board[ROWS][COLS],int row,int col);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
