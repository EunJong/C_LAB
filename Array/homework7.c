//과제 7
//141026 남현욱
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct Point
{
	int x, y;
};

struct Command
{
	int type;
	int arg1, arg2;
};

void printBoard(int board[][19],int mode);
void initBoard(int board[][19]);
void react(int board[][19], struct Point history[], int stoneNum, int num);
int putStone(int board[][19],int x, int y,struct Point history[], int stoneNum);
void printHelp(int stoneNum, int mode);
struct Command order(int board[][19],int stoneNum);
int checkDeadStone(int board[][19], int x, int y, int stoneNum, struct Point refDeadStone[]);
void deleteDeadStone(int board[][19], struct Point deadStone[], int deadStoneNum);
void printInvalidInput(int board[][19], int stoneNum, int mode);


int main(void)
{
	struct Point stoneHistory[400];
	int stoneNum = 1;
	int board[19][19];
	int mode = 1;
	struct Command c;

	system("mode con cols=90 lines=35");

	initBoard(board);

	for (;;)
	{
		printBoard(board, mode);
		printHelp(stoneNum, mode);
		c = order(board, stoneNum);
		while (c.type == -1 || c.type == 1)
		{
			if (c.type == 1)
			{
				if (putStone(board, c.arg1, c.arg2, stoneHistory, stoneNum))
				{
					stoneNum++;
					break;
				}
				else
				{
					printInvalidInput(board, stoneNum, mode);
					c = order(board, stoneNum);
				}
			}
			else
			{
				printInvalidInput(board, stoneNum, mode);
				c = order(board, stoneNum);
			}
		}

		switch (c.type)
		{
		case 0:
			mode = c.arg1;
			break;
		case 2:
			react(board, stoneHistory, stoneNum, c.arg1);
			stoneNum -= c.arg1;
			break;
		case 3:
			return 0;
		case 4:
			initBoard(board);
			break;
		}
	}
}

void printBoard(int board[][19], int mode)
{
	int x, y;

	system("cls");

	//숫자로 표시
	if (mode == 0)
	{
		for (x = 0; x < 20; x++)
		{
			if (x == 0)printf("    ");
			else
			{
				printf("%3d ", x - 1);
			}
		}
		puts("");
		for (y = 0; y < 19; y++)
		{
			printf("%3d ", y);
			for (x = 0; x < 19; x++)
			{
				printf("%3d ", board[y][x]);
			}
			puts("");
		}
	}
	else
	{
		for (x = 0; x < 20; x++)
		{
			if (x == 0)printf("   ");
			else
			{
				printf("%2d", x - 1);
			}
		}
		puts("");
		for (y = 0; y < 19; y++)
		{
			printf("%2d ", y);
			for (x = 0; x < 19; x++)
			{
				if (board[y][x] < 0)
					printf("○");
				if (board[y][x] == 0)
					printf("┼");
				if (board[y][x]>0)
					printf("●");
			}
			puts("");
		}
	}

}

void react(int board[][19], struct Point history[], int stoneNum, int num)
{
	int i;

	initBoard(board);

	for (i = 1; i < stoneNum-num; i++)
	{
		putStone(board, history[i].x, history[i].y, history, i);
	}
	
}

int putStone(int board[][19], int x, int y, struct Point history[], int stoneNum)
{
	int t = stoneNum;
	int deadStoneNum;
	struct Point deadStone[400];

	if (t % 2 == 1)t = -t;
	board[y][x] = t;


	history[stoneNum].x = x;
	history[stoneNum].y = y;

	if (x > 0 && board[y][x - 1] * t<0)
	{
		deadStoneNum = checkDeadStone(board, x - 1, y, stoneNum, deadStone);
		if (deadStoneNum > 0)
		{
			deleteDeadStone(board, deadStone, deadStoneNum);
		}
	}
	if (x < 18 && board[y][x + 1] * t<0)
	{
		deadStoneNum = checkDeadStone(board, x + 1, y, stoneNum, deadStone);
		if (deadStoneNum > 0)
		{
			deleteDeadStone(board, deadStone, deadStoneNum);
		}
	}
	if (y > 0 && board[y - 1][x] * t<0)
	{
		deadStoneNum = checkDeadStone(board, x, y - 1, stoneNum, deadStone);
		if (deadStoneNum > 0)
		{
			deleteDeadStone(board, deadStone, deadStoneNum);
		}
	}
	if (y < 18 && board[y + 1][x] * t<0)
	{
		deadStoneNum = checkDeadStone(board, x, y + 1, stoneNum, deadStone);
		if (deadStoneNum > 0)
		{
			deleteDeadStone(board, deadStone, deadStoneNum);
		}
	}

	if (checkDeadStone(board, x, y, stoneNum, deadStone) > 0)
	{
		react(board, history, stoneNum, 0);
		return 0;
	}

	return 1;
}

void printHelp(int stoneNum,int mode)
{
	printf("mode: %s", (mode % 2) ? "visual" : "number");
	printf("\n=================\n");
	printf("명령어 설명:\n");
	printf("mod 0 입력 = 숫자 모드, mod 1 입력 = 비쥬얼 모드\n");
	printf("put (숫자) (숫자) = (숫자),(숫자)위치에 돌 놓음.\n");
	printf("remove (숫자) : 숫자만큼 턴을 물림.\n");
	printf("exit = 종료\n");
	printf("reset = 초기화\n");
	printf("숫자 모드에서 음수는 흑돌, 양수는 백돌입니다.\n");
	printf("=================\n\n");
	printf("현재 %s돌 차례입니다.\n", (stoneNum % 2) ? "흑" : "백");
}

//type 0 = mode 변경, type 1 = put type 2 = remove type 3 = exit type 4 = reset
struct Command order(int board[][19],int stoneNum)
{
	char com[255];
	int arg1, arg2;
	struct Command c;

	fflush(stdin);

	printf("명령어 입력: ");
	scanf("%s", com);

	if (strcmp(com, "mod")==0)
	{
		scanf("%d", &arg1);
		if (arg1 == 0 || arg1 == 1)
		{
			c.type = 0;
			c.arg1 = arg1;
			c.arg2 = 0;
			return c;
		}
	}
	else if (strcmp(com, "put") == 0)
	{
		scanf("%d %d", &arg1, &arg2);
		if (arg1 >= 0 && arg1 < 19 && arg2 >= 0 && arg2 < 19 && board[arg2][arg1]==0)
		{
			c.type = 1;
			c.arg1 = arg1;
			c.arg2 = arg2;
			return c;
		}
	}
	else if (strcmp(com, "remove") == 0)
	{
		scanf("%d", &arg1);

		if (arg1 < stoneNum && arg1 > 0)
		{
			c.type = 2;
			c.arg1 = arg1;
			c.arg2 = 0;
			return c;
		}
	}
	else if (strcmp(com, "exit")==0)
	{
		c.type = 3;
		c.arg1 = 0;
		c.arg2 = 0;
		return c;
	}
	else if (strcmp(com, "reset") == 0)
	{
		c.type = 4;
		c.arg1 = 0;
		c.arg2 = 0;
		return c;
	}
	c.type = -1;
	c.arg1 = 0;
	c.arg2 = 0;
	return c;
}

void initBoard(int board[][19])
{
	int x, y;

	for (y = 0; y < 19; y++)
	{
		for (x = 0; x < 19; x++)
		{
			board[y][x] = 0;
		}
	}
}

//x,y칸을 포함한 돌들의 사석 여부 확인. 리턴값은 사석의 개수이며 refDeadStone에 사석 위치를 담아서 돌려준다.
int checkDeadStone(int board[][19], int x, int y, int stoneNum, struct Point refDeadStone[])
{
	int tx, ty;
	int head = 1;
	int num = 0;
	int color = board[y][x];
	int check[19][19];
	struct Point stack[400];

	stack[head].x = x;
	stack[head].y = y;

	while (head != 0)
	{
		tx = stack[head].x;
		ty = stack[head].y;
		head--;

		if (check[ty][tx] != 1)
		{
			check[ty][tx] = 1;
			refDeadStone[num].x = tx;
			refDeadStone[num].y = ty;
			num++;

			if (tx > 0)
			{
				if (board[ty][tx - 1] == 0)
					return 0;
				if (board[ty][tx - 1] * color > 0 && check[ty][tx - 1] != 1)
				{
					head++;
					stack[head].x = tx - 1;
					stack[head].y = ty;
				}
			}
			if (ty > 0)
			{
				if (board[ty - 1][tx] == 0)
					return 0;
				if (board[ty - 1][tx] * color > 0 && check[ty - 1][tx] != 1)
				{
					head++;
					stack[head].x = tx;
					stack[head].y = ty - 1;
				}
			}
			if (tx < 18)
			{
				if (board[ty][tx + 1] == 0)
					return 0;
				if (board[ty][tx + 1] * color > 0 && check[ty][tx + 1] != 1)
				{
					head++;
					stack[head].x = tx + 1;
					stack[head].y = ty;
				}
			}
			if (ty < 18)
			{
				if (board[ty + 1][tx] == 0)
					return 0;
				if (board[ty + 1][tx] * color > 0 && check[ty + 1][tx] != 1)
				{
					head++;
					stack[head].x = tx;
					stack[head].y = ty + 1;
				}
			}
		}
	}
	return num;
}

void deleteDeadStone(int board[][19], struct Point deadStone[], int deadStoneNum)
{
	int i;

	for (i = 0; i < deadStoneNum; i++)
	{
		board[deadStone[i].y][deadStone[i].x] = 0;
	}
}

void printInvalidInput(int board[][19], int stoneNum, int mode)
{
	printBoard(board, mode);
	printHelp(stoneNum, mode);
	printf("\a\a올바르지 않은 입력입니다. 다시 입력해주십시오.\n");
}