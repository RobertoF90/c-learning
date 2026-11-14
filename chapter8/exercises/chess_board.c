// Declaration of an 8 x 8 array chessboard.

#include <stdio.h>

int main (void)
{
	char chess_board[8][8]= {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
				 {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
				 {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
				 {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
				 {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
				 {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
				 {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
				 {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

	for (int i = 0; i <= 7; i++)
		for (int j = 0; j <= 8; j++)
			if (j == 8)printf("\n"); 
			else printf("%c ", chess_board[i][j]);
	return 0;
}
