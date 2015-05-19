#define _CRT_SECURE_NO_WARNINGS
#define MAX 100

#include <stdio.h>

int main(void)
{
	int i=0;

	while(i<10){
		printf("Hello, World%d\n", i);
		i++;
	}

	return 0;
}


int main(void)
{
	char c = 0;

	while(c ! = 'q'){
	
		scanf_s("%c", &c);
		printf("%c\n", c);
		
	}
}
/*
int main(void)
{
	
	double num1, i, num2;
	double dNum;
	char c;
	/*printf("숫자를 입력 하세요\n");
	scanf("%d %lf", &num1, &dNum);

    i = 4 & num1;
	i >>= 2;
	printf("%d %e\n", num1, dNum);
	

	num1 = 1.0;
	num2 = 2.0;
	dNum = num1/num2;
	printf("%f\n", dNum);

	//int num, total = 0;
	//printf("숫자를 입력 하세요\n");
	//scanf("%d", &num);

	/*do{
		
		printf("숫자를 입력 하세요\n");
		scanf("%d", &num);
		total += num;
	}while(num != 0);

	printf("total = %d\n", total);
	return 0;*/
/*
	int num = 15;
	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("%d \n", result1);
	printf("%d \n", result2);
	printf("%d \n", result3);
	*/
	//return 0;
//}


/*
int main(void)
{
	/*
	int num1, bit_value;
	printf("숫자를 입력하세요");
	scanf("%d", &num1);

	bit_value = num1 & 4;
	bit_value >>= 2;

	printf("입력된 숫자는 %d 세 번째 비트값은 %d 입니다\n", 
		 num1, bit_value);
	
	return 0;
	*/

/*	int num1, num2, num3, num4;
	int max;
	printf("네 수를 입력하세요 예) 10 20 50 30\n");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	max = (num1>num2)?num1:num2;
	max = (max>num3)?max:num3;
	max = (max>num4)?max:num4;

	printf("입력받은 수는 %d %d %d %d 이며\n가장 큰 수는 %d입니다\n",
		    num1, num2, num3, num4, max);
			*/

	/*int num1, num2, num3;*/
	//double average;
	//scanf("%d %d %d", &num1, &num2, &num3);

	//average = 3.0/5;

	//num = dNum;
//	printf("%d %d %d\n", num1, num2, num3);
	//printf("%f\n", average);

//	return 0;
//}


