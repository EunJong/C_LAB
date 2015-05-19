#include "struct.h"

int main(void)
{
	/*
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	int *parr;
	int num;
	int i;
	
	Person *person;
	person = (Person*)malloc(sizeof(Person));
	
	if(person ==  NULL){
		return -1;
	}

	strcpy(person->name, "ÀÌ½Â±â");
	strcpy(person->handPhone, "010-2222-3333");
	person->age = 28;

	printf("%s %s %d\n", person->name, person->handPhone, person->age);

	/*
	printf("how many? ");
	scanf("%d", &num);

	parr = (int*)malloc(sizeof(int) * num);

	if(parr == NULL){
		printf("memory allocation error\n");
		return -1;
	
	} 
	
	for(i=0; i<num; i++){
		scanf("%d", &parr[i]);
	}

	for(i=0; i<num; i++){
		printf("%d ", *(parr+i));
	}

	free(parr);
	
	/*
	Person persons[3];

	int i=0;
	for(i=0; i<3; i++){
		printf("person %d:\n", i);
		printf("name: ");
		scanf("%s", persons[i].name);
		printf("handphone: ");
		scanf("%s", persons[i].handPhone);
		printf("age: ");
		scanf("%d", &persons[i].age);
	}
	
	for(i=0; i<3; i++){
		printf("%s %s %d\n", persons[i].name, persons[i].handPhone, persons[i].age);
	}
	*/
	

	return 0;
}