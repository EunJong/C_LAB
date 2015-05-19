#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;

	for( i = 'A'; i <= 'Z'; i++){
		printf("%d %c\n", i, i);
	}
}


/*
int main(void)
{

	int cur_dan = 2;
	int times = 1;

	while(cur_dan <10){
		times = 1;
		while(times < 10){
			printf("%d * %d = %d\n", cur_dan, times, cur_dan*times);
			times++;
		}
		cur_dan++;
		printf("\n");
	}
}
*/
/*
int main(void)
{
	int line_count =0;
	int circle_count=0;

	while(line_count < 6){
		circle_count = 0;
		while(circle_count < line_count){
			printf("o");
			circle_count++;
		}
		printf("*\n");
		line_count++;
	}
	return 0;

}

int main(void)
{
	int count = 0;
	int input =0;
	int total = 0;

	while(count <5){
		input = 0;
		while(input <=0){
			printf("%d 번째 입력 :", count +1);
			scanf_s("%d", &input);
		}
	
		total += input;
		count++;
		
	}
	printf("total = %d\n", total);
	return 0;
}

int main(void)
{
	int num;
	int num2;
	int factorial = 1;
	printf("input number : ");
	scanf_s("%d", &num);
	num2 = num;

	while(num >0 ){
		factorial *= num;
		num--;
	}

	printf("%d! = %d\n", num2, factorial);
	return 0;

}*/

/*
int main(void)
{
	int line_count = 0;
	int star_count = 1;
	int space_count = 2;
	int i;
	
	while(line_count < 4){
	

			for(i=0; i<space_count; i++)
				printf(" ");
			for( i=0; i<star_count; i++)
				printf("*");
			for( i=0; i<space_count; i++)
				printf(" ");
			

		star_count +=2;
		line_count++;
		space_count -=1;
		printf("\n");
	}
	
	line_count = 0;
	space_count = 0;
	star_count = 5;
	while(line_count < 4){
	

			for(i=0; i<space_count; i++)
				printf(" ");
			for( i=0; i<star_count; i++)
				printf("*");
			for( i=0; i<space_count; i++)
				printf(" ");
			

		star_count -=2;
		line_count++;
		space_count +=1;
		printf("\n");
	}
}

*/


int main(void)
{
	
	

}