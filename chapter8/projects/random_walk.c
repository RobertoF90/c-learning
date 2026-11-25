/* generates a "random walk" across a 10 x 10 array */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(void) 
{
	char map[10][10] = {{'.','.','.','.','.','.','.','.','.','.'},
			   {'.','.','.','.','.','.','.','.','.','.'},
			   {'.','.','.','.','.','.','.','.','.','.'},
			   {'.','.','.','.','.','.','.','.','.','.'},
			   {'.','.','.','.','.','.','.','.','.','.'},
			   {'.','.','.','.','.','.','.','.','.','.'},
			   {'.','.','.','.','.','.','.','.','.','.'},
			   {'.','.','.','.','.','.','.','.','.','.'},
			   {'.','.','.','.','.','.','.','.','.','.'},
			   {'.','.','.','.','.','.','.','.','.','.'}};
	char letter = 65;

	bool walking = true;

	int i, j;

	int random;
	int x = 0;
	int y = 0;
	

	bool dir[] = {true, true, true, true};

	srand((unsigned) time(NULL));

	map[0][0] = letter;
	letter++;

	while (walking) {

		random = rand() % 4;
		
		switch (random) {
			case 0:
				if (y > 0 && map[y - 1][x] == '.')
				{
					y--;
					map[y][x] = letter;
					letter++;
					for (i = 0; i < 4; i++)
						dir[i] = true;
					break;
				} else {
					dir[random] = false;
					break;
				}

			case 1:
				if (x < 9 && map[y][x + 1] == '.')
				{
					x++;
					map[y][x] = letter;
					letter++;
					for (i = 0; i < 4; i++)
						dir[i] = true;
					break;
				} else {
					dir[random] = false;
					break;
				}
		
			case 2:
				if (y < 9 && map[y + 1][x] == '.')
				{
					y++;
					map[y][x] = letter;
					letter++;
					for (i = 0; i < 4; i++)
						dir[i] = true;
					break;
				} else {
					dir[random] = false;
					break;
				}
			case 3:
				if (x > 0 && map[y][x - 1] == '.')
				{
					x--;
					map[y][x] = letter;
					letter++;
					for (i = 0; i < 4; i++)
						dir[i] = true;
					break;
				} else {
					dir[random] = false;
					break;
				}
		}

		if (letter == 91) walking = false;

		if (dir[0] == false &&
		    dir[1] == false &&
		    dir[2] == false &&
		    dir[3] == false) walking = false;
	}

	for (i = 0; i < 10; i++)
	{
		printf("\n");
		for (j = 0; j < 10; j++) printf("%c ", map[i][j]);
		
	}

	printf("\n");

	return 0;
}
