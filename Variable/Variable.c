#include "Variable.h"



void recursive(int num)
{
	if(num == 0) return;

	printf("current num = %d\n", num);
	recursive(num - 1);

	printf("after num = %d\n", num);
}

int factorial_iter(int num){
	int result;
	if(num == 1) return 1;
	 

	result = num * factorial_iter(num-1);
	
	return result;
}
int factorial(int num){
	int i;
	int result =1;
	
	for(i=num; i>0; i--){
		result *= i;
	}

	return result;
}

int fib(int num)
{
	int result;
	if(num == 0) return 0;
	if(num == 1) return 1;

	result = fib(num-1) + fib(num-2);
	
	return result;
}

int fib_iter(int num)
{
	int pre = 0;
	int current  = 1;
	int next;
	int i;

	for( i = 2; i<=num; i++){
	
		next = pre + current;
		pre = current;
		current = next;
	}

	return next;
}


int main(void)
{
	int i;

	for(i=0; i<5; i++){
		callStatic();
	}

	return 0;
}

void callStatic(){
	
	static int sNum = 0;
	int num =0;

	sNum++;
	num++;
	
	printf("sNum=%d, num=%d\n", sNum, num);
	return;
}



/*
int main(void)
{
	int num = 3;
//	recursive(num);
	//int fac_value = factorial(5);
	//printf("%d\n", fac_value);

	//fac_value = factorial_iter(5);
	//printf("%d\n", fac_value);


	printf("fib(5) = %d\n", fib(6));
	printf("fib_iter(5) =%d\n", fib_iter(6));
}

*/

/*
int main(void)
{
	int cnt;
	for(cnt = 0; cnt <3; cnt++)
	{
		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d \n", cnt +1, num);
	}
	if(cnt == 3)
	{
		int num = 7;
		num++;
		printf("if문 내에 존재하는 지역변수 num 은 %d \n", num);
	}

	return 0;
}
*/

void SimpleFunc(void)
{
	static int num1 = 0;
	int num2 = 0;
	num1++;
	num2++;
	printf("static:%d, local:%d\n", num1, num2);

}
/*
int main(void)
{
	int i;
	for(i=0; i<5; i++)
	{
		SimpleFunc();
	
	}
	return 0;
}

*/

int AddToTotal(int num)
{
	static int total = 0;
	total += num;
	return total;
}
/*
int main(void)
{
	int num, i;
	for(i=0; i<3; i++){
	
		printf("입력 %d:", i+1);
		scanf_s("%d", &num);
		printf("누적: %d \n", AddToTotal(num));
	}

	return 0;
}
*/