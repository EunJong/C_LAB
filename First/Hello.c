// dkfjdslafjlsjfljsdlf

/* 
    Date : 2015. 3. 4
	Author : ������
	Description : ���α׷��� ���� ù ���α׷�
*/

#include <stdio.h>
#include "struct.h"

/*
int main()
{
	printf("�̸�\n��ȭ��ȣ\n\t�ּ�\n");  // hello, world�� �ֿܼ� ����մϴ�.
	//printf("�ּ�");
	//printf("��ȭ��ȣ\n");

	printf("���� %d\n ������ ��¥�� %d�� %d�� %d�� �Դϴ�. ",
		   12345, 2015, 3, 5);
	
	return 0;
}*/

//varialble

int adder(int num1, int num2)
{
	return num1 + num2;
}



void MaxAndMin(int arr[], int len, int** max, int** min){

	int i=0;
	
	*max = &arr[0];
	*min = &arr[0];

	for(i = 1; i<len; i++){
	
		if( **max < arr[i])
			*max = &arr[i];
		if( **min > arr[i])
			*min = &arr[i];
	}

}

int add(int num1, int num2){
	
	return num1 + num2;
}

int sub(int num1, int num2){
	
	return num1 - num2;
}

int times(int num1, int num2){
	
	return num1 * num2;
}

int divide(int num1, int num2){
	
	return num1 / num2;
}

int calc(int n1, int n2, int (*op)(int, int)){
	return op(n1, n2);
}

int whoIsFirst(int age1, int age2, int (*cmp)(int, int))
{
	return cmp(age1, age2);
}

int olderFirst(int age1, int age2){
	if(age1 > age2) return age1;
	else if(age1 <age2) return age2;
	else return 0;
}

int youngerFirst(int age1, int age2){
	if(age1 < age2) return age1;
	else if(age1 > age2) return age2;
	else return 0;
}
/*
int main(void)
{
	int age1 = 50;
	int age2 = 20;

	printf("Older First = %d\n", whoIsFirst(age1, age2, olderFirst));
	printf("Younger First = %d\n", whoIsFirst(age1, age2, youngerFirst));
}

*/




