#include"game.h"

void game()
{
	long gameboard[ROW][COL] = { 0 };//棋盘
	srand((unsigned)time(NULL));
	do
	{
		setboard(gameboard, ROW, COL);
		showboard(gameboard, ROW, COL);
	} while (play(gameboard, ROW, COL));
}

//
//int main()
//{
//	cout
//		<< "********************\n"
//		<< "*-*1.play  0.exit*-*\n"
//		<< "********************\n";
//	size_t c = 1;
//	while (1)
//	{
//		cin >> c;
//		switch (c)
//		{
//		case 1:
//			game();
//			cout << "游戏结束，是否重开？：\n";
//			break;
//		case 0:
//			return 0;
//		default:
//			cout << "\e[0; 31m" << "输入错误";
//			break;
//		}
//	}
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
VOID SetColor(UINT uFore, UINT uBack) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, uFore + uBack * 0x10);
}
int main()
{
	SetColor(14, 0);
	printf("Colorful ");
	SetColor(11, 0);
	printf("Text\n");
	return 0;
}