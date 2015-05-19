#include "function.h"


/*
int addNumber(int n1, int n2){

	int result;
	result = n1 + n2;

	return result;
}

int main()
{
	int num1, num2;
	int addValue;

	scanf_s("%d %d", &num1, &num2);
	addValue = addNumber(num1, num2);

	printf("%d + %d = %d\n", num1, num2, addValue);

}
*/
/*
int add(int n1, int n2){

	return n1 + n2;
}

int sub(int n1, int n2){

	return n1 - n2;
}

int times(int n1, int n2){

	return n1 * n2;
}

int divide(int n1, int n2){

	return n1 / n2;
}


int main()
{
	int operation = 99;
	double op1, op2;
	double result;
	
	printf(" 1.µ¡¼À, 2.»¬¼À, 3.°ö¼Á, 4.³ª´°¼À, 0.END");
	printf(" ¼±ÅÃ:");
	scanf("%d", &operation);
	
	while( operation != 0 ){

		
		printf("µÎ °³ÀÇ ½Ç¼ö ÀÔ·Â:");
		scanf("%lf %lf", &op1, &op2);

		if( operation == 1)
			result = add(op1, op2);
		else if(operation == 2)
			result = sub(op1, op2);
		else if(operation == 3)
			result = times(op1, op2);
		else if(operation == 4)
			result = divide(op1, op2);
		else{
			result = -9999999;
			printf("¿Ã¹Ù¸£Áö ¾ÊÀº ¿¬»êÀÚ ÀÔ´Ï´Ù");
		}
		
		printf("result = %f\n", result);

		printf(" 1.µ¡¼À, 2.»¬¼À, 3.°ö¼Á, 4.³ª´°¼À, 0.END");
		printf(" ¼±ÅÃ:");
		scanf("%d", &operation);
		
	

	}
	
}
*/

void HowToUseThisProg();  //¼±¾ð declaration
int ReadNum();
int Add(int, int );
void ShowAddResult(int);
/*
int main()
{
	int result, num1, num2;
	HowToUseThisProg();
	int data = 0;

	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	
	ShowAddResult(result);
	
	return 0;
}
*/
void HowToUseThisProg()  //±¸Çö implementation
{
	printf("µÎ ¼ö¸¦ ÀÔ·ÂÇÏ¸é ´õÇØ ÁÝ´Ï´Ù.\n");
}

int ReadNum(){ 

	int num;
	scanf_s("%d", &num);
	return num;

}

int Add(int n1, int n2){
	return n1 + n2;
}

void ShowAddResult(int value){
	printf("%d\n", value);
}


// c = (f-32)/1.8
// f = (c*1.8) + 32
/*
double celToFath(double degree){
	
	double re = (degree*1.8) + 32; 
	printf("¼·¾¾ %fµµ´Â È­¾¾ %fµµ ÀÔ´Ï´Ù", degree, re);
	return re;
}

double fathToCel(double degree){
	
	return (degree-32)/1.8;
}


int main()
{
	char degreeType = 'a';
	double degree = 0;
	double cel = 0;
	double fath;
	
	scanf_s("%c", &degreeType, sizeof(degreeType));
	scanf_s("%lf", &degree);

	if( degreeType == 'c' || degreeType == 'C'){
		
		fath = celToFath(degree);
		
	} 
	else if( degreeType == 'f' || degreeType == 'F'){
	
		cel = fathToCel(degree);
		printf("È­¾¾ %fµµ´Â ¼·¾¾ %fµµ ÀÔ´Ï´Ù", degree, cel);
	
	}else{
		printf("Àß¸øµÈ ÀÔ·ÂÀÔ´Ï´Ù\n");
	}

}

*/
/*
int GetAbsoluteValue(int value){
	if(value > 0 ) 
		return value;
	else 
		return value * (-1);
}

int AbsoComapare(int n1, int n2){

	//int abs1 = GetAbsoluteValue(n1);
	//int abs2 = GetAbsoluteValue(n2);

	if( GetAbsoluteValue(n1) > GetAbsoluteValue(n2) )
		return n1;
	else 
		return n2;
}

int main(void)
{
	int num1, num2;
	printf("µÎ °³ÀÇ Á¤¼ö ÀÔ·Â:");
	scanf_s("%d %d", &num1, &num2);
	printf("%d ¿Í %dÁß Àý´ë°ªÀÌ Å« Á¤¼ö %d \n", num1, num2, 
		               AbsoComapare(num1, num2));
	return 0;
}

/*
int main(void)
{
	int c=0;
	scanf_s("%d", &c);

	printf("%c %d\n", c, c);
}
*/


//double add(int, double);
/*
int main(void)
{
	int num1 = 10;
	int num2 = 5;

	int result = add(num1, num2);
	int result2 = add(num1, 5.0);
	printf("%d %d\n", result, result2);
}

int add(int n1, int n2){
	
	return n1 + n2;
}

/*
int main(void)
{
	int month;
	int days=30;

	scanf_s("%d", &month);

	switch(month)
	{
		case 1:
		case 3:case 5:case 7:case 8:case 10:case 12:
			days = 31;
			break;
		case 4:case 6:case 9:case 11:
			days = 30;
			break;
		case 2:
			days = 28;
			break;
		default:
			days = 0;
			printf("error");
	}
	printf("days = %d\n", days);
	

}*/

void recursive(int num){

	if(num <=0) return;

	printf("recursive called %d\n", num);
	recursive(num - 1);

	printf("current num = %d\n", num);

}

/*
int main(void)
{

	int num = 3;
	recursive(num);
}

*/


