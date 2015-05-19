#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student.h"

//1¹ø
void mystrcat(char* str1, char* str2, char *result)
{
	while(*str1 != '\0'){
		*result = *str1;
		result++;
		str1++;
	}

	while(*str2 != '\0'){
		*result = *str2;
		result++;
		str2++;

	}
	*result = '\0';

}
/*
int main(void)
{
	char* str1 = "hello";
	char* str2 = "world";

	char* result;
	int len = strlen(str1) + strlen(str2) +1;
	result = (char*)malloc(len);

	mystrcat(str1, str2, result);
	printf("%s\n", result);

}
*/

// 2
/*int main(void)
{
	int array[3][2] = {{1,2}, {3,4}, {5,6}};
	int (*ptr)[2] = array;

	printf("%d\n", sizeof(array));  
	printf("%d\n", sizeof(array[0]));   
	printf("%d\n", sizeof(ptr));  
	printf("%d\n", sizeof(*array[0]));  
}
*/
//3
void MyFunc(void)
{
	static int si = 0;
	int j = 0;
	si++; j++;
	printf("si: %d, j: %d \n", si, j);
}
/*
int main(void)
{
	int i;
	for(i =0; i< 5; i++)
		MyFunc();
	return 0;
}
*/

//4
void MaxAndMin(int arr[], int len, int **max, int **min)
{
	int i;
	*max = &arr[0];
	*min = &arr[0];

	for(i=1; i<len; i++){
		if( **max < arr[i] ) 	
			*max = &arr[i];
		if( **min > arr[i] )
			*min = &arr[i];
	}
}
/*
int main(void)
{
	int array[5] = {2, 8, 10, 3, 5};
	int *pmax;
	int *pmin;

	MaxAndMin(array, 5, &pmax, &pmin); 
	printf("%d, %d\n", *pmax, *pmin);

}
*/
/*
	//5
int main(void)
{
	int num1 = 20;
	int num2 = (num1++) +5 * 2 ;

	printf("num1 : %d \n", num1++);
	printf("num2 : %d \n", --num2);
	return 0;

}
*/
/*
//6
void swapValueA(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swapValueB(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int x = 10;
	int y = 20;

	swapByValue(x, y);
	printf("x = %d, y= %d \n", x, y);  // x = 10, y = 20
	
	swapByReference(&x, &y);
	printf("x = %d, y= %d \n", x, y);  // x = 20, y= 10

	return 0;
}
*/

int main(void){

	Student **students;
	int i = 0;

	students = (Student**)malloc(sizeof(Student*)*3);

	for(i=0; i<3; i++){
		students[i] = (Student*)malloc(sizeof(Student));
	
	}

	students[0]->studentNumber = 1001;
	strcpy(students[0]->studentName, "ÃÖ½Â¹Ì");
	strcpy(students[0]->handphone, "010-2222-3333");
	
	students[1]->studentNumber = 1002;
	strcpy(students[1]->studentName, "¹Ú¼ÛÈñ");
	strcpy(students[1]->handphone, "010-3333-5555");
	
	students[2]->studentNumber = 1003;
	strcpy(students[2]->studentName, "¹è¼öÁö");
	strcpy(students[2]->handphone, "010-7777-9999");
	
	for(i=0; i<3; i++){
	
		printf("%d\n", students[i]->studentNumber);
		printf("%s\n", students[i]->studentName);
		printf("%s\n", students[i]->handphone);
	}

	return 0;
}




