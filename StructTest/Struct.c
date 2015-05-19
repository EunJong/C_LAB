#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#include <ctype.h>
#include <stdlib.h>

typedef struct sBox{
	int a;
	int b;
	double c;
}SBox;

typedef union uBox{
	int a;
	int b;
	double c;
}UBox;

struct ShortNum{
	unsigned short upper;
	unsigned short lower;
};

typedef union alltype{
	int num;
	struct ShortNum shortnum;
	char mychar[4];

}AllType;

//int main(void)
//{
	/*
	SBox sbox;
	UBox ubox;
	AllType all;
	all.num = 10;
	
	ubox.b = 20;

	printf("%d %d\n", sizeof(sbox), sizeof(ubox));
	printf("%p %p %p\n", &sbox.a, &sbox.b, &sbox.c); 
	printf("%p %p %p\n", &ubox.a, &ubox.b, &ubox.c);

	printf("%d %d\n", ubox.b, ubox.a);

	printf("%d %d %d\n", all.num, all.shortnum.lower, all.mychar[3]); 
	*/
//}

int mystrlen(char* str)
{
	int len = 0;
	
	while( *str !='\0'){
		len++;
		str++;
	}

	return len;
}

void mystrcat(char* str1, char* str2, char* result){

	while(*str1 != '\0'){
		*result = *str1;
		result++;
		str1++;
	}

	while(*str2 !='\0'){
		*result = *str2;
		result++;
		str2++;
	}

	*result = *str2;
}


void mystrcpy(char* dest, char* source)
{
	while(*source !='\0'){
	
		*dest = *source;
		dest++;
		source++;
	}
	*dest = *source;
}

int mystrcmp(char* str1, char* str2){

	while( *str1 == *str2 ){
	
		if( *str1 == '\0' && *str2 == '\0'){
			return 0;
		}
		str1++;
		str2++;
	}

	if(*str1 > *str2 ) return 1;
	else return -1;
}

int main(void)
{
	char *str = "hello, World";
	char *dest; // = NULL;
	
	char str1[10] = "first";
	char str2[10] = "second";
	char *result;
	
	char str3[30] = "My string";
	char str4[30] = "My string";

	int len = mystrlen(str);

	//strlen
	printf("길이: %d, 내용: %s %d \n", mystrlen(str), str, sizeof(str));
	//strcpy
	dest = (char*)malloc(len + 1);
	memset(dest, 0, len+1);

	mystrcpy(dest, str);
	printf("source: %s, dest: %s \n", str, dest);

	result = (char*)malloc( mystrlen(str1) + mystrlen(str2) +1 );
	mystrcat(str1, str2, result);
	printf("str1: %s, str2: %s result :%s\n", str1, str2, result);
	
	printf("%d \n", mystrcmp(str3, str4));
	
	free(dest);
	free(result);

} 