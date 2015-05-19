#ifndef _STRUCT_H
#define _STRUCT_H
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	int studentNumber;
	char studentName[64];
	int gender;
};

typedef int INT;
typedef struct student Student;

typedef struct point{
	int xPos;
	int yPos;
}Point;

typedef struct circle{
	Point* point;
	int radius;
}Circle;

typedef struct person{
	char name[15];
	char handPhone[15];
	int age;
}Person;




#define FEMALE	100
#define	MALE	101

#endif