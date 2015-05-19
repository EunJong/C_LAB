#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//HW7 바둑판 만들기
void putstone(int, int, int, int[][19]);
void printBoard(int table[][19]);
/*
int main(void){
	int table[19][19] = { 0 };
	int x = 0, y = 0, num1 = 1, num2 = -1;
	for (int i = 0; i < 19 * 19; i++, num1++, num2--)
	{
		printf("흑의 x좌표를 입력하세요(1-19):");
		scanf("%d", &x);
		printf("흑의 y좌표를 입력하세요(1-19):");
		scanf("%d", &y);
		putstone(x, y, num1, table);
		printf("=================%d수==================\n", 2 * num1 - 1);
		printBoard(table);

		printf("백의 x좌표를 입력하세요(1-19):");
		scanf("%d", &x);
		printf("백의 y좌표를 입력하세요(1-19):");
		scanf("%d", &y);
		putstone(x, y, num2, table);
		printf("=================%d수==================\n", 2 * num1);
		printBoard(table);
	}

	return 0;
}
*/
//num번째 돌을 놓는다.
void putstone(int x, int y, int num, int table[][19])
{
	while (x > 20 || y > 20 || x < 0 || y < 0 || table[x - 1][y - 1] != 0)
	{
		printf("잘못 입력하셨습니다.\n");
		printf("x좌표를 다시 입력하세요(1-19):");
		scanf("%d", &x);
		printf("y좌표를 다시 입력하세요(1-19):");
		scanf("%d", &y);
	}

	table[x - 1][y - 1] = num;
}

//현재 바둑판을 출력한다.
void printBoard(int table[][19])
{

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			printf("%2d", table[i][j]);
		}
		printf("\n");
	}

}