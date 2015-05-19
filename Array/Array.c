
#include <stdio.h>
#include <string.h>


void printArray(int[][9]);

//int main(){

/*	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int total = 0;

	for(i=0; i<10; i++){
		total += array[i];
	}

	printf("total = %d\n", total);
	*/

//reverse string
/*
	char source[100];
	char dest[100];
	int len = 0;
	int i, j;

	printf("문자열을 입력하세요\n");
	scanf_s("%s", source, sizeof(source));


	while(source[len] !='\0'){
		len++;
	}

	for(i =len -1, j=0; i>=0; i--, j++){
		dest[j] = source[i];
	} 
	dest[j] = '\0';

	printf("source = %s dest = %s strlen(source) = %d len = %d\n", source, dest, strlen(source), len);

	*/




	
	//곱하기 printArray()
/*	int gugu[3][9];

	int i, j;

	for(i = 0; i<3;  i++){
		for(j = 0; j <9; j++){
			gugu[i][j] = (i+2) * (j+1);
		}
	}

	printArray(gugu);*/

/*	char str[100];
	int array[2][4] = {
						{1,2,3,4},
						{5,6,7,8}
						};
	int copy[4][2];

	int i, j;

	for(i = 0; i<2; i++){
		for(j=0; j<4; j++){
			copy[j][i] = array[i][j];		
		}
	
	}

	for(i=0; i<4; i++){
		for(j=0; j<2; j++){
			printf("copy[%d][%d] = %d\n", i, j , copy[i][j]);
		}
		printf("\n");
	}


	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

}
/*
void printArray(int gugudan[3][9]){

	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<9; j++){
			printf("gugu[%d][%d] = %d\n", i, j , gugudan[i][j]);
		}
		printf("\n");
	}

	return;
}
*/

void printArray(int gugudan[][9]){

	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<9; j++){
			printf("gugu[%d][%d] = %d\n", i, j , gugudan[i][j]);
		}
		printf("\n");
	}

	return;
}