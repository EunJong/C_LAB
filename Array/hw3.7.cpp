#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//HW7 �ٵ��� �����
void putstone(int, int, int, int[][19]);
void printBoard(int table[][19]);
/*
int main(void){
	int table[19][19] = { 0 };
	int x = 0, y = 0, num1 = 1, num2 = -1;
	for (int i = 0; i < 19 * 19; i++, num1++, num2--)
	{
		printf("���� x��ǥ�� �Է��ϼ���(1-19):");
		scanf("%d", &x);
		printf("���� y��ǥ�� �Է��ϼ���(1-19):");
		scanf("%d", &y);
		putstone(x, y, num1, table);
		printf("=================%d��==================\n", 2 * num1 - 1);
		printBoard(table);

		printf("���� x��ǥ�� �Է��ϼ���(1-19):");
		scanf("%d", &x);
		printf("���� y��ǥ�� �Է��ϼ���(1-19):");
		scanf("%d", &y);
		putstone(x, y, num2, table);
		printf("=================%d��==================\n", 2 * num1);
		printBoard(table);
	}

	return 0;
}
*/
//num��° ���� ���´�.
void putstone(int x, int y, int num, int table[][19])
{
	while (x > 20 || y > 20 || x < 0 || y < 0 || table[x - 1][y - 1] != 0)
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		printf("x��ǥ�� �ٽ� �Է��ϼ���(1-19):");
		scanf("%d", &x);
		printf("y��ǥ�� �ٽ� �Է��ϼ���(1-19):");
		scanf("%d", &y);
	}

	table[x - 1][y - 1] = num;
}

//���� �ٵ����� ����Ѵ�.
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