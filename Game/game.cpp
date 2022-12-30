#include"game.h"


void setboard(long b[ROW][COL], int row, int col)
{
	for (int i = 0; ; i++)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (!b[x][y])
		{
			b[x][y] = 2;
			break;
		}
	}

}

void showboard(long b[ROW][COL], int row, int col)
{
	printf("_________________________\n");
	for (int i = 0; i < row; i++)
	{
		printf("|");
		for (int j = 0; j < row; j++)
		{
			printf("%4d", b[i][j]);
			printf(" |");

		}
		printf("\n");
		printf("-------------------------\n");

	}
}


int move()
{
	return 0;
}

int play(long b[ROW][COL], int row, int col)
{
	switch (_getch())
	{
	case 'w':
	{
		for (int j = 0; j < col; j++)
			for (int i = 0; i < row; i++)
			{
				if (b[i][j] != 0)
				{
					for (int z = 0; z < i; z++)
					{
						if (b[z][j] == 0 || b[z][j] == b[i][j])
						{
							if (z == i - 1 || (i - z == 2 ? !b[z + 1][j] : !(b[z + 1][j] + b[z + 2][j])))
							{
								b[z][j] += b[i][j];
								b[i][j] = 0;
							}
						}
					}
				}
			}
		break;
	}
	case 's':
	{
		for (int j = 0; j < col; j++)
			for (int i = row - 1; i >= 0; i--)
			{
				if (b[i][j] != 0)
				{
					for (int z = row; z > i; z--)
					{
						if ((b[z][j] == 0 || b[z][j] == b[i][j]))
						{
							if (z == i + 1 || (z - i == 2 ? !b[z - 1][j] : !(b[z - 1][j] + b[z - 2][j])))
							{
								b[z][j] += b[i][j];
								b[i][j] = 0;
							}
						}
					}
				}
			}
		break;
	}
	case 'a':
	{
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
			{
				if (b[i][j] != 0)
				{
					for (int z = 0; z < j; z++)
					{
						if (b[i][z] == 0 || b[i][z] == b[i][j])
						{
							if (z == j - 1 || (j - z == 2 ? !b[i][z+1] : !(b[i][z + 1] + b[i][z + 2])))
							{
								b[i][z] += b[i][j];
								b[i][j] = 0;
							}
						}
					}
				}
			}
		break;
	}
	case 'd':
	{
		for (int i = 0; i < row; i++)
			for (int j = col; j >= 0; j--)
			{
				if (b[i][j] != 0)
				{
					for (int z = col; z > j; z--)
					{
						if (b[i][z] == 0 || b[i][z] == b[i][j])
						{
							if (z == j + 1 || (z - j == 2 ? !b[i][z - 1] : !(b[i][z - 1] + b[i][z - 2])))
							{
								b[i][z] += b[i][j];
								b[i][j] = 0;
							}
						}
					}
				}
			}
		break;
	}
	default:
		cout << "´íÎó\n";
		break;
	}

	return 1;
}