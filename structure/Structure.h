#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct point{
	int x;
	int y;
}Point;

struct Circle{
	double radius;
	Point *center;
};

struct person{
	char name[100];
	char address[125];
	char phone[20];
};

typedef struct person Person;
Person* PersonPtr;

typedef struct dbshort{
	unsigned short upper;
	unsigned short lower;
}DBshort;

typedef union rbbuf{
	int iBuf;
	DBshort sBuf;
	char buf[4];
}RDBuf;


typedef struct sbox{

	int mem1;
	int mem2;
	double mem3;
}SBOX;

typedef union ubox{

	int mem1;
	int mem2;
	double mem3;
}UBOX;
