#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);//≥ı ºªØ∆Â≈Ã
void DisplayBoard(char board[ROW][COL], int row, int col);//¥Ú”°∆Â≈Ã
char IsWin(char board[ROW][COL], int row, int col);//≈–∂œ ‰”Æ