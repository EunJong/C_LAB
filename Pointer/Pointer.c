#include "MyData.h"
#include <stdlib.h>
int main(void)
{
	struct Person Lee = {"이승기", "010-1111-2222", 26};
	struct Person Choi;


	Student *student1;
	student1 = (Student*)malloc(sizeof(Student));

	student1->sname = (char*)malloc(sizeof(char*) * 20);
	strcpy(student1->sname, "ㅁㅁㅁ");

	free(student1->sname);
	free(student1);

	INT num  = 10;


	
	Person_Type persons[3];
	
	Student students[3];
	int i;
	

	for(i=0; i<3; i++){
		printf("%d번째 학생 번호\n", i+1);
		scanf("%d", &students[i].sno);
		printf("%d번째 학생 이름\n", i+1);
		scanf("%s", students[i].sname);
		printf("%d번째 학생 핸드폰번호\n", i+1);
		scanf("%s", students[i].phone);
	}

	for(i=0; i<3; i++){
		printf("학번:%d\t이름:%s\t핸드폰 번호:%s\n", 
			students[i].sno, students[i].sname, students[i].phone); 
	
	}
	
	Choi.age = 28;
	persons[0].age = 30;

	
}

//int main(void)
//{
/*	int num;
	int *ptr;
	num = 10;
	ptr = &num;

	printf("num = %d, &num = %d\n", num, &num);
	printf("*ptr = %d, ptr = %d &ptr = %d\n", *ptr, ptr, &ptr);
	*/

/*	int num1, num2 = 0;
	int *ptr = &num1;
	*ptr = 10;

	printf("%d %d\n", num1, num2);
	
	num2 = *ptr;
	printf("%d %d\n", num1, num2);

	ptr = &num2;
	*ptr = 5;
	printf("%d %d\n", num1, num2);

	*/

//LAB- 1

/*	int num1 = 10;
	int num2 = 20;

	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *temp;


	*ptr1 += 10;
	*ptr2 -= 10;
	
	printf("*ptr1 = %d *ptr2 = %d\n", *ptr1, *ptr2);

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	printf("*ptr1 = %d *ptr2 = %d\n", *ptr1, *ptr2);
	
	*/

	/*int arr[5];
	int *pa;
	pa = arr;

	printf("pa = %d arr= %d &arr[0] = %d\n", pa, arr, &arr[0]);
	*/

/*	int arr[3] = {0, 1, 2};
	int *pa = arr;

	printf("배열의 이름: %08X \n", arr);
	printf("first element: %p \n", &arr[0]);
	printf("second element: %p \n", &arr[1]);
	printf("third element: %p \n", &arr[2]);
	
	printf("first element: %d \n", *pa);
	printf("second element: %d \n", pa[1]);
	pa = pa+2;
	printf("third element: %d \n", *pa);
	*/

	/*int arr1[3] = {1, 2, 3};
	double arr2[3] = {1.1, 2.2, 3.3};

	printf("%d %g \n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 200.0;

	printf("%d %g \n", *(arr1+1), *(arr2+2));
	*/


/*	int array[5] = {10, 20, 30, 40 ,50};
	int *ptr = array;

	printf("++*ptr = %d\n" , ++*ptr);  //11
	printf("*++ptr = %d\n" , *++ptr);  //20
	printf("--*ptr = %d\n" , --*ptr);  //19
	printf("*--ptr = %d\n" , *--ptr);  //11
	printf("*(ptr++) = %d\n" , *(ptr++));  //11
	printf("*(ptr--) = %d\n" , *(ptr--));  //19
	*/

//LAB2
/*	int arr[5] = {1,2,3,4,5};
	int *parr = arr;
	int *rarr = &arr[4];
	int total = 0;
	int  i= 0;

	for( i =0; i<5; i++)
	{
		*(parr +i) += 2;

	}

	for(i=0; i<5; i++){
		printf("%d\t", *(parr+i));
	}
	*/
//LAB3	
/*	for(i=0; i<5; i++)
	{
		total += (*(rarr--));
	}
	printf("total = %d\n", total);
	*/
	/*
	int arr[6] = {1,2,3,4,5,6};
	int *farr = &arr[0];
	int *rarr = &arr[5];

	int temp;
	int i;

	for(i=0; i<3; i++){
		temp = *farr;
		*farr = *rarr;
		*rarr = temp;
		farr++;
		rarr--;
	}

	for(i=0; i<6; i++){
		printf("%d\n", arr[i]);
	}
	
	//printf("%d\n", *(arr++));
	return 0;
	*/

	/*
	int x = 10;
	int y = 20;

	printf("x=%d y=%d\n", x, y);
	callByValue(x, y);
	printf("x=%d y=%d\n", x, y);
	callByReference(&x, &y);
	printf("x=%d y=%d\n", x, y);
	*/


/*	int a=10, b=20, c= 30;
	int *p[3] = {&a, &b, &c};
	char *strArr[3] = {"simple", "string", "array"};

	int i;
	char *week[]={"Sunday", "Monday", "Tuesday", "Wednesday",  
                         "Thursday", "Friday", "Saturday"};

	for(i = 0; i<sizeof(week)/4; i++)
		printf("week[%d] = %c, %s\n", i, *week[i], week[i]);

	printf("%d\n", sizeof(week));

	printf("%d \n", p[0]);
	printf("%d \n", p[1]);
	printf("%d \n", p[2]);

	
	printf("%s\n", strArr[0]);
	printf("%s\n", strArr[1]);
	printf("%s\n", strArr[2]);
	*/
/*	
	double num = 3.14;
	double *ptr = &num;
	double **dptr = &ptr;
	double *ptr2;

	printf("%p %p \n", ptr, *dptr);
	printf("%g %g \n", num, **dptr);

	ptr2 = *dptr;
	*ptr2 = 10.99;
	printf("%g %g \n", num, **dptr);
	*/
/*
	int num1=10, num2=20;
	int *ptr1, *ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	swapInPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	swapInPtr2(&ptr1, &ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
	*/
	/*
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	int *arr[] = {&num1, &num2, &num3};
	int **dptr = arr;

	int a[3] = {1, 2, 3};
	int *pa = a;


	printf("%d %d %d\n", *(arr[0]), *(arr[1]), *(arr[2])  );
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2])  );
	*/
	
/*	char *language[] = {"visual C++", "java", "javascript",    
                                 "android"};
	char **ptr = language;

	printf("[%c]", *language[3]);
	printf("[%s]", *language);
	printf("[%c]\n", **ptr);

	return 0;
	*/
	
/*
	char *com[] = {"monitor", "printer", "speaker", "mouse"};
 
	char **ptr[] = {com+3, com+2, com+1, com};
	char ***root = ptr;

	printf("[%s]", **++root);
	printf("[%s]", *--*++root+2);
	*/
/*
	int arr2d[3][3];
	printf("%p \n", arr2d);
	printf("%p \n", arr2d[0]);
	printf("%p \n", &arr2d[0][0]);

	printf("%p \n", arr2d[1]);
	printf("%p \n", &arr2d[1][0]);

	printf("%p \n", arr2d[2]);
	printf("%p \n", &arr2d[2][0]);

	printf("sizeof(arr2d) : %d \n", sizeof(arr2d));
	printf("sizeof(arr2d[0]) : %d \n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]) : %d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]) : %d \n", sizeof(arr2d[2]));
	*/

/*	int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p \n", arr1);
	printf("arr1+1: %p \n", arr1 +1);
	printf("arr1+2: %p \n", arr1 +2);

	printf("arr2: %p \n", arr2);
	printf("arr2+1: %p \n", arr2+1);
	*/

/*	int arr[2][2] = {{1,2}, {3,4}};
	int (*ptr)[2];
	int i, j;
	ptr = arr;

	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d ", ptr[i][j]);
		}
	}
	*/

/*	int arr[3][2] = {{1,2}, {3, 4}, {5, 6}};

	printf("%d %d \n", arr[1][0], arr[0][1]);
	printf("%d %d \n", *(arr[2]+1), *(arr[1]+1));
	printf("%d %d \n", *(arr+2)[0], (*(arr+0))[1]);
	printf("%d %d \n", **arr, *(*(arr+0)+0));
	*/

	

//}

void displayArr1(int arr[], int size){

	int i;
	for(i=0; i<size; i++)
		printf("%d\n", arr[i]);
}

void displayArr2(int *parr, int size){

	int i;
	for(i=0; i<size; i++)
		printf("%d\n", *(parr++));
}

void swapInPtr(int *p1, int *p2)
{
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}

void swapInPtr2(int **p1, int **p2)
{
    int *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
/*

void callByValue(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

	printf("x=%d y=%d\n", x, y);
}

void callByReference(int *x, int *y){
	
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}*/


void SimpleAdder(int n1, int n2)
{
	printf("%d + %d = %d\n", n1, n2, n1 + n2); 
}

void ShowString(char *str)
{
	printf("%s\n", str);
}


int whoIsFirst(int age1, int age2, int(*cmp)(int, int))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if(age1>age2) return age1;
	else if(age1<age2) return age2;
	else return 0;
}

int YoungerFirst(int age1, int age2)
{
	if(age1<age2) return age1;
	else if(age1>age2) return age2;
	else return 0;
}
/*
int main(void)
{
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("입장순서1\n");
	printf("Older First = %d\n", whoIsFirst(age1, age2, OlderFirst)); 

	printf("입장순서2\n");
	printf("Younger First = %d\n", whoIsFirst(age1, age2, YoungerFirst)); 
}
*/
void MaxAndMin(int arr[], int count, int** max, int** min)
{
	int i;
	*max = &arr[0];
	*min = &arr[0];
	
	for(i=1; i<count; i++){
	
		if( **max < arr[i] )
			*max = &arr[i];
		if( **min > arr[i] )
			*min = &arr[i];
	}

	return;

}

int adder(int num1, int num2){

	return num1 + num2;
}

int sub(int num1, int num2){
	return num1 - num2;

}

int Calc(int num1, int num2,   int (*pCalc)(int, int)   ){

	return pCalc(num1, num2);
}

int main(void)
{
/*
	int n1 = 10;
	int n2 = 20;

	

	printf("%d + %d = %d\n", n1, n2, Calc(n1, n2, adder));
	printf("%d - %d = %d\n", n1, n2, Calc(n1, n2, sub));
	*/
	

	int arr[3][2]= {{1,2},
					{3,4},
					{5,6}};

	int (*parr)[2] = arr;

	printf(" **arr= %d\n", **arr);
	printf(" arr[0][0] = %d\n", arr[0][0]);
	printf(" *(*(arr+0)+0) = %d\n", *(*(arr+0)+0));
	printf(" *(*(parr+0)+0) = %d\n", *(*(parr+0)+0));

	printf("arr+1 = %p\n", arr+1);
	printf("arr[1] = %p\n", arr[1]);

	printf("*(*(parr+2)+1) = %d\n", *(*(parr+2)+1)  );
	
	//printf("arr+2 = %p\n", arr+2);

	/*
	int *ptr;
	int i;
	int *tempPtr;
	ptr = (int*)malloc(sizeof(int) * 10);

	if(ptr == NULL){
		printf("memory allocation error \n");
		return -1;
	}

	tempPtr = ptr;
	
	for(i=0; i<10; i++){
		*(ptr+i) = i+1;
		//*ptr = i+1;
		
	}

	ptr = tempPtr;
	for(i=0; i<10; i++){
		printf("%d ", *(ptr+i));
		//ptr+i;
	}


	if(ptr) free(ptr);
	*/
//}

/*
void swapInPtr(int **p1, int **p2)
{
	int * temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	int *pnum1 = &num1;
	int *pnum2 = &num2;

	//swapInPtr(pnum1, pnum2);
	swapInPtr(&pnum1, &pnum2);

	printf("num1 = %d num2=%d \n", *pnum1, *pnum2);
	
}*/
/*
void MaxAndMin(int a[], int len, int **pmax, int **pmin)
{
	int *min = &a[0];
	int *max = &a[0];
	int i;

	for(i=0; i<len; i++){
		if ( *min > a[i])
			min = &a[i];
		if (*max < a[i])
			max = &a[i];
	}
	*pmax = max;
	*pmin = min;

	return;
}

int main(void)
{
	int arr[5] = {6, 2, 10, 3, 5};
	int *max;
	int *min;

	MaxAndMin(arr, 5, &max, &min);
	printf("min = %d, max = %d \n", *min, *max);
	return 0;
}*/