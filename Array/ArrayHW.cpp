/* 141008 ����
���α׷��ֿ��� 1�й� - 3��° ���� : �迭*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
static int g_board[3][19 * 19] = { 0 };
static int g_count = 0;

char getMaxASCII(); // ���� 1
void printScore(); // ���� 2
void getPrime(int upBound); // ���� 3
void multiplyMatrices(int A[2][3], int B[3][2]); // ���� 4
void printTriMat(); // ���� 5
void printBowtie(int num); // ���� 6
void print45(int num);
void printSnail(int num);
int min(int num1, int num2); // ���� 7
void putStone(int i, int j, int arr[][19]);
void putBoard(int arr[][19]); 
void playGo();
void reactStone(int arr[][19], int count);


int main(void){
	int A[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int B[3][2] = { { 2, 4 }, { 6, 3 }, { 5, 7 } };
	int a = 5;
	int b = 5;
	int input=0;

	//printf("\n���� - 1\n");
	//printf("ASCII���� ���� ū ���� : %c\n", getMaxASCII());

	//printf("\n���� - 2\n");
	//printScore();
	
	//printf("\n���� - 3\n");
	//getPrime(200);
	
	//printf("\n���� - 4\n");
	//multiplyMatrices(A, B);

	//printf("\n���� - 5\n");
	//void printTriMat();

	//printf("\n���� - 6\n");
	//printf("�����Է� : ");
	//scanf("%d", &input);
	//printBowtie(input);
	//printSnail(input);
	//print45(input);

	//printf("\n���� - 7\n");
	//playGo();
}


//���� - 1

char getMaxASCII(){
	char str[50];
	char max;
	printf("����ܾ� �Է� : ");
	scanf("%s", str);
	
	max = *str;
	for (int i = 0; *(str + i) != '\0'; i++){
		max = max > *(str + i) ? max : *(str + i);
	}
	return max;
}


//���� - 2

void printScore(){
	int scoreMat[3][4];
	char* strMat[2][4] = { { "KOREAN	", "ENGLISH	", "MATH	", "TOTAL	" }, { "========", "=========", "======", "=======" } };
	int temp[3][4];
	int i, j;

	for (i = 0; i < 3; i++){
		printf("���� �Է�(KOREAN, ENGLISH, MATH) : ");
		scanf("%d %d %d", &temp[i][0], &temp[i][1], &temp[i][2]);
		temp[i][3] = temp[i][0] + temp[i][1] + temp[i][2];
		for (j = 0; j < 4; j++){
			scoreMat[i][j] = temp[i][j];
		}
	}
	for (i = 0; i < 2; i++){
		for (j = 0; j < 4; j++){
			printf("%s", strMat[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++)
			printf("%d\t", scoreMat[i][j]);
		printf("\n");
	}
}
	

// ���� - 3

void getPrime(int upBound){
	int primeArray[100];
	int i, j, k = 0;

	for (i= 2; i <= upBound; i++){
		for (j = 2; j <= sqrt(i); j++){
			if (i%j == 0)
				break;
		}
		if (j > sqrt(i)){
			primeArray[k] = i;
			printf("%d\t", primeArray[k]);
			if (k % 10 == 9)
				printf("\n");
			k++;
		}
	}
}


// ���� - 4

void multiplyMatrices(int A[2][3], int B[3][2]){
	int C[2][2];
	int i, j, k, temp = 0;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			for (k = 0; k < 3; k++){
				temp += A[i][k] * B[k][j];
			}
			C[i][j] = temp;
			temp = 0;
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
}


// ���� - 5

void printTriMat(){
	int loTriMat[10][10] = { 0 };
	int upTriMat[10][10] = { 0 };
	int i, j, count = 0;

	for (i = 0; i < 10; i++){
		for (j = 9 - i; j < 10; j++){
			loTriMat[i][j] = ++count;
			//printf("%d\t", loTriMat[i][j]);
		}
	}
	for (j = 0; j < 10; j++){
		for (i = 0; i < j+1; i++){
			upTriMat[i][j] = ++count;
			//printf("%d\t", upTriMat[i][j]);
		}
	}

	//���
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (loTriMat[i][j] == 0)
				printf(" \t");
			else
				printf("%d\t", loTriMat[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (upTriMat[i][j] == 0)
				printf(" \t");
			else
				printf("%d\t", upTriMat[i][j]);
		}
		printf("\n");
	}

}

// ���� - 6
int min(int num1, int num2){
	int min = num1 < num2 ? num1 : num2;
	return min;
}

void printBowtie(int num){
	int i, j, k, count = 0;
	int Mat[100][100] = { 0 };

	for (j = 0; j < num; j++){
		k = min(num -1 - j, j);
		for (i = k; i < num - k; i++){
			Mat[i][j] = ++count;
		}
	}
	printf("\n----------�����Ÿ�� ���!----------\n");
	for (i = 0; i < num; i++){
		for (j = 0; j < num; j++){
			if (Mat[i][j] == 0)
				printf(" \t");
			else
				printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}
}

void print45(int num){
	int i, j, k, count = 0;
	int Mat[100][100] = { 0 }; // �� �κ��� ����!!! ��� �޸𸮸� �Ҵ��ұ�? malloc�� �̿�

	for (k = 0; k < 2*num -1 ; k++){
		if (k < num){
			for (j = 0; j <= k; j++){
				i = k - j;
				Mat[i][j] = ++count;
			}
		}
		else{
			for (j = k - num +1 ; j < num ; j++){
				i = k - j;
				Mat[i][j] = ++count;
			}
		}
	}
	printf("\n----------45�� ���!----------\n");
	for (i = 0; i < num; i++){
		for (j = 0; j < num; j++){
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}
}


void printSnail(int num){

	int Mat[100][100] = { 0 };

	int i = 0, j = 0, k = 0;
	int ruEnd = 0, rdEnd = num - 1, crEnd = num - 1, clEnd = 0;
	int nElement = num*num;

	for (k = 0; k < nElement;){
		Mat[i][j] = ++k;
		//printf("%d\t%d\n", Mat[i][j], &Mat[i][j]);
		if (i == ruEnd && j < crEnd){
			j++;
		}
		else if (j == crEnd  && i < rdEnd){
			i++;
		}
		else if (i == rdEnd && j > clEnd){
			j--;
		}
		else if (j == clEnd && i > ruEnd){
			i--;
			if (i == ruEnd && j == clEnd){
				ruEnd++;
				rdEnd--;
				clEnd++;
				crEnd--;
				i = ruEnd, j = clEnd;
			}
		}
		else{
			break;
		}
	}
	printf("\n----------���������!----------\n");
	for (i = 0; i < num; i++){
		for (j = 0; j < num; j++){
			printf("%d\t", Mat[i][j]);
		}
		printf("\n");
	}
}

// ���� - 7

void playGo(){
	int board[19][19] = { 0 };
	int rowIn, colIn;
	char choice;
	int num;

	for (g_count = 0; g_count < 19 * 19; g_count++ ){
		rowIn = 0;
		colIn = 0;

		printf("��[i] : ");
		scanf("%d", &rowIn);
		printf("��[j] : ");
		scanf("%d", &colIn);
		fflush(stdin);
		printf("\n");

		putStone(rowIn, colIn, board);
		putBoard(board);

		printf("%d %d %d\n", g_count, g_board[0][g_count], g_board[1][g_count]);

		printf("�����ðڽ��ϱ�? Y/N ");
		scanf("%c", &choice);
		fflush(stdin);
		if (choice == 'Y'){
			printf("�� �� �����ðڽ��ϱ�? ");
			scanf("%d", &num);
			fflush(stdin);
			reactStone(board, num);
			putBoard(board);
		}
		printf("\n");
	}

	printf("��������\n");
}

void putStone(int i, int j, int arr[][19]){
	int sgn = 1;
	if (arr[i][j] != 0){
		printf("�߸� �Է��ϼ̽��ϴ�\n");
		g_count--;
	}

	if (g_count % 2 == 0){
		sgn = -1;
	}
	arr[i][j] = sgn * (g_count+1);
	g_board[0][g_count] = i;
	g_board[1][g_count] = j;
	g_board[2][g_count] = arr[i][j];
}

void putBoard(int arr[][19]){
	for (int i = 0; i < 19; i++){
		for (int j = 0; j < 19; j ++){
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void reactStone(int arr[][19], int count){
	for (int i= 0; i < count; i++){
		g_board[2][g_count - i] = 0;
	}
	for (int k = 0; k < 19*19; k++){
		arr[g_board[0][k]][g_board[1][k]] = g_board[2][k];
	}
	g_count -= count; // ���⼭ ù��°(��)���� (0,0)�� �ξ��� �� �����⸸ �ϸ� board[0][0]�� ������ Ƚ���� ������� 0���� �ʱ�ȭ�Ǵ� ����
}
	




