#define _CRT_SECURE_NO_WARNINGS

#ifndef _MYDATA_H_
#define _MYDATA_H_

#include <stdio.h>
#include <string.h>


struct point{
	int xpos;
	int ypos;
};

typedef struct point Point;
typedef int INT;

typedef struct Person{
	char name[32];
	char phone[20];
	int age;
}Person_Type;

typedef struct student{
	int sno;
	char *sname;
	char phone[30];
}Student;


void callByValue(int, int);
void callByReference(int*, int*);
void swapInPtr(int*, int*);
void swapInPtr2(int**, int**);
void displayArr1(int[], int);
void displayArr2(int*, int);


#endif _MYDATA_H_