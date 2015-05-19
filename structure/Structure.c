#include "Structure.h"


void orgSymTrans(Point *pos){

	pos->x = (pos->x) * -1;
	pos->y = (pos->y) * -1;
}

void  showPosition(Point pos){

	printf("[%d %d]\n", pos.x, pos.y);
}

void MaxAndMin(int *arr, int count, int** max, int**min){

	int i;
	int *pmax = &arr[0];
	int *pmin = &arr[0];

	for(i=0; i<count; i++){
		if ( *pmin > arr[i])
			pmin = &arr[i];
		if ( *pmax < arr[i])
			pmax = &arr[i];
	}

	*max = pmax;
	*min = pmin;

	return;
}


Point GetCurrentPosition(){
	
	Point point;
	scanf("%d %d", &point.x, &point.y);
	return point;
}

void ShowCurrentPosition(Point pos){
	
	printf("%d %d\n", pos.x, pos.y);

}

void changePosition(Point* point){
	
	int temp;
	
	temp = point->x;
	point->x = point->y;
	point->y = temp;

}

int main(void)
{
	
	
	/*int** arrPtr;

	//int* arr1, *arr2, *arr3;
	
	//int* Ptr2[3] = { arr1, arr2, arr3};
	//int **parr = arrPtr2;


	int i, j;
	int num=1;
	arrPtr = (int**)malloc(sizeof(int*) *10);
	if(arrPtr == NULL){
		return -1;
	}

	for(i=0; i<10; i++){
		*(arrPtr+i) = (int*)malloc(sizeof(int)*10);
		if(arrPtr[i] == NULL){
			for(j=0; j<i; j++){
				free(arrPtr[j]);
			}
			free(arrPtr);
			return -1;
		}
	}

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			//arrPtr[i][j] = num;
			*(*(arrPtr+i)+j) = num;
			num++;
		}
	}

	for(i=0; i<10; i++){
	
		for(j=0; j<10; j++){
			printf("%d ", arrPtr[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i<10; i++){
		if(arrPtr[i] != NULL)
			free(arrPtr[i]);
	}

	if(arrPtr) free(arrPtr);
		
	/*
	
	Person** personPtr;

	int i;
	personPtr = (Person**)malloc(sizeof(Person*)*3);
	if(personPtr == NULL){
		return -1;
	}

	for(i=0; i<3; i++){
	
		personPtr[i] = (Person*)malloc(sizeof(Person));
		
		if(personPtr[i] == NULL){
			free(personPtr);
			return -1;
		}
	}

	strcpy(personPtr[0]->name, "이승기");
	strcpy(personPtr[1]->name, "김수현");
	strcpy(personPtr[2]->name, "이민호");


	for(i=0; i<3; i++){
		printf("%s\n", personPtr[i]->name);
	}

	for(i=0; i<3; i++){
		if(personPtr[i] != NULL)
			free(personPtr[i]);
	}
	
	if(personPtr != NULL)
		free(personPtr);

/*	int *arrPtr;
	int i;
	int num = 10;

	arrPtr = (int*)malloc(sizeof(int) *num);
	if(arrPtr == NULL){
		printf("interger memory allocation error\n");
		return -1;
	}

	for(i=0; i<10; i++){
		arrPtr[i] = i+1;
	}

	for(i=0; i<10; i++){
		printf("%d ", *(arrPtr+i));
	}

	free(arrPtr);
	*/
	/*int arr[5] = {6, 2, 10, 3, 5};
	int *max;
	int *min;

	MaxAndMin(arr, 5, &max, &min);
	printf("max = %d, min=%d\n", *max, *min);
	return  0;
	*/
/*
	RDBuf buf;
	scanf("%d", &(buf.iBuf));

	printf("upper =%u \n", buf.sBuf.upper);
	printf("lower =%u \n", buf.sBuf.lower);
	printf("upper 1byte = %c\n", buf.buf[0]);
	printf("lower 1byte = %c\n", buf.buf[3]);
/*	Point pos = {7, -5};
	orgSymTrans(&pos);
	showPosition(pos);
	*/
	/*
	struct Point point;
	int *ptr;
	int i=0;
	point.x = 10;
	point.y = 20;

	scanf_s("%d %d", &point.x, &point.y);

	printf("x = %d, y=%d\n", point.x, point.y);

	ptr = (int*)malloc(sizeof(int) * 10);
	if(ptr == NULL){
		return -1;
	}

	for(i=0; i<10; i++){
		*(ptr+i) = (i+1);
	}
	
	for(i=0; i<10; i++){
		printf("%d, " ,*(ptr+i));
	}

	free(ptr);
	*/

/*	Person **personPtr;
	int i=0;
	personPtr = (Person **)malloc(sizeof(Person*) * 3);
	for(i=0; i<3; i++)
		personPtr[i] = (Person*)malloc(sizeof(Person));
	 
	strcpy(personPtr[0]->address, "서울시 서초구");
	strcpy(personPtr[0]->name, "이승기");
	strcpy(personPtr[0]->phone, "010-1111-2222");
	

	scanf_s("%s", personPtr[0]->address, sizeof(personPtr[0]->address)); 
	scanf_s("%s", personPtr[0]->name, sizeof(personPtr[0]->name)); 
	scanf_s("%s", personPtr[0]->phone, sizeof(personPtr[0]->phone)); 

	printf("이름: %s\n", personPtr[0]->name);
	printf("주소: %s\n", personPtr[0]->address);
	printf("전화번호: %s\n", personPtr[0]->phone);
	
	free(personPtr);
*/
/*	Point point;
	point = GetCurrentPosition();
	ShowCurrentPosition(point);
	changePosition(&point);
	ShowCurrentPosition(point);
	*/


	SBOX sbox;
	UBOX ubox;
	
	printf("%p %p %p\n", &sbox.mem1, &sbox.mem2, &sbox.mem3);
	printf("%p %p %p\n", &ubox.mem1, &ubox.mem2, &ubox.mem3);
	sbox.mem1 = 100;
	ubox.mem1 = 100;

	printf("%d %d %g\n", sbox.mem1, sbox.mem2, sbox.mem3);
	printf("%d %d %g\n", ubox.mem1, ubox.mem2, ubox.mem3);

}





