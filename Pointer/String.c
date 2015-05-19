#include <stdio.h>
/*
void callByValue(int* , int* );
void add(int x, int y, int result);
void calc (int x, int y, int* add, int * sub, int* times, int* divide);

void toUpperCase(char * str){

	while(*str != '\0'){
	
		*str -= 32;
		str++;
	}
	return;
}

char* reverseString(char* str){

	char reverse[100];
	char *temp =str;
	int len=0;
	int i;
	int j;

	while(*str != '\0') {
		len++;
		str++;
	}

	for(i=len-1, j=0; i>=0; i--, j++){
		reverse[j] = temp[i]; 
	}

	reverse[j] = '\0';

	printf("%s", reverse);
	return reverse;
}

int main(void)
{
/*	char str1[] = "My String";
	char* str2 = "Your String";
	printf("%s %s \n", str1, str2);
	str1[0] = 'X';
	//str2[0] = 'X';

	printf("%s %s \n", str1, str2);

	printf("%d \n", sizeof(str1));
	printf("%d \n", sizeof(str2));
	//str1 = "test";
	str2 = "test";

	printf("%s %s \n", str1, str2);
	*/

	/*char str[100];
	
	scanf_s("%s", str, sizeof(str));
	toUpperCase(str);
//	reverseString(str);

	printf("%s", str);	
	*/
	/*
	int x = 10;
	int y = 20;
	int add_result;
	int sub_result;
	int times_result;
	int divide_result;

	printf("x=%d, y=%d\n", x, y);
	//callByValue(&x, &y);
	printf("x=%d, y=%d\n", x, y);
	
	calc(x, y, &add_result, &sub_result, &times_result, &divide_result);
	printf("x=%d, y=%d\n", x, y);
	printf("add = %d\n", add_result);
	printf("sub = %d\n", sub_result);
	printf("times = %d\n", times_result);
	printf("divide = %d\n", divide_result);
	*/
/*
	int a = 10, b= 20, c = 30;

	int* parr[] = {&a, &b, &c};

	char *str1 = "hello";
	char *str2 = "hi";
	char *str3 = "how r u";

	char *greetings[] = {str1, str2, str3};

	printf("%c\n", *(greetings[0]+1));
	printf("%c\n", *greetings[1]);
	printf("%c\n", *greetings[2]);

	return 0;
}

void calc (int x, int y, int* add, int * sub, int* times, int* divide){

	*add = x + y;
	*sub = x - y;
	*times = x * y;
	*divide = x/y; 

}

void add(int x, int y, int result)
{

	result = x + y;
}

void callByValue(int *a, int *b){

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	printf("a=%d, b=%d\n", *a, *b);

	return;

}*/