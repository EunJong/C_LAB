/******************************************************/
/* NHNNEXT Programming Practice Homework_4_11         */
/* ID   : 141011                                      */
/* Name : Kim Deok Seong                              */
/* Homework in PPT - Baduk                            */
/******************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// make all array have 0
void init_table(int arr[][19]){
	int i, j;
	for (i = 0; i < 19; i++){
		for (j = 0; j < 19; j++){
			arr[i][j] = 0;
		}
	}
}

//print the baduk table
void print_table(int arr[][19]){

	int i, j;
	printf("\n\t  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18\n");
	printf("\t==========================================================\n");
	for (i = 0; i < 19; i++){
		printf("%2d\t|",i);
		for (j = 0; j < 19; j++){
			printf("%2d ", arr[i][j]);
		}
		printf("\t\n");
	}
	printf("\n");
}
void print_table_bw(int arr[][19]){
	int i, j;
	printf("\n\t 0 1 2 3 4 5 6 7 8 9101112131415161718\n");
	printf("\t£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß£ß\n");
	for (i = 0; i < 19; i++){
		printf("%2d\t", i);
		for (j = 0; j < 19; j++){
			if (arr[i][j] < 0)
				printf("¡Û");
			else if (arr[i][j] > 0)
				printf("¡Ü");
			else
				printf("¦«");
		}
		printf("\t\n");
	}
	printf("\t£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ£þ\tDesigned by Sae-bin Jung.\n");
}
//place the turn number into arr[r][c] and change the turn and return it if arr[r][c] is 0
int place_stone(int arr[][19], int r, int c, int turn){
	if (arr[r][c]){
		printf("\n\a\a\a-System message-\t There is already stone!\n");

	}
	else{
		//place the stone
		arr[r][c] = turn;

		//change the turn 
		if (turn < 0) turn--;
		else turn++;
		turn *= -1;
	}
	return turn;
	
}

//help case p.
void print_turn(int turn){
	if (turn < 0) printf("-Game   message-\t black's %d turn.\n", -turn);
	else printf("-Game   message-\t white's %d turn.\n", turn);
	printf("-Game   message-\t put 'row column' (0~18)(0~18) \t: ");

}
//check the position. if r or c is wrong, return 1. else 0.
int is_wrong_posi(int r, int c){
	if (r >= 0 && r < 19 && c >= 0 && c < 19) return 0;
	printf("\a\a\a-System message-\t Wrong position. Try again.\a\n");
	return 1;
}

//take back one move. find the array one turn before, and change it to 0. return one turn before.  
int take_back(int arr[][19], int turn){
	int i, j;
	//isn't the turn first move? 
	if (turn == -1){
		printf("\a\a\a-System message-\t There is no stone on the table.\n");
		return -1;
	}

	printf("-Game   message-\t Take back one move.\n");
	if (turn < 0) turn++;
	else turn--;
	turn *= -1;

	for (i = 0; i < 19; i++){
		for (j = 0; j < 19; j++){
			if (arr[i][j] == turn){
				arr[i][j] = 0;
				return turn;
			}
		}
	}
	return 0; //error
}

/*
int main(void){
	int baduk[19][19];
	char opt;
	int posi_r, posi_c; // row and column position that user entered.
	int turn = -1; // -1 : black's turn. 1 : white's turn
	
	init_table(baduk);
	print_table_bw(baduk);
	do{
		if (turn == 0){ //error check.
			printf("Error\n");
			return -1;
		}
		//system("cls"); // clean the screen 
		printf("-Game   message-\t play 'p' take back 'b' table 't' quit 'q' : ");
		scanf("\n%c", &opt);
		switch (opt){
		case 'P':
		case 'p': // play the game
			print_turn(turn);
			scanf("%d %d", &posi_r, &posi_c);
			if (is_wrong_posi(posi_r, posi_c)) {
				print_table_bw(baduk);
				continue;//check the input position 
			}
			turn = place_stone(baduk, posi_r, posi_c, turn);
			print_table_bw(baduk);
			break;
		case 'T':
		case 't': //see Table
			printf("-Game   message-\t Move Numbering Table\n");
			print_table(baduk);
			break;
		case 'B':
		case 'b': //take back one move
			turn = take_back(baduk, turn);
			print_table_bw(baduk);
			break;
		case 'Q':
		case 'q': //quit
			printf("\n\tThanks for Playing\n");
			break;
		default : //wrong character
			printf("\a\a\a-System message-\t'q', 't' or 'q' please.\n");
			break;
		}
		
	} while (opt != 'q'); //if q, quit the game.
	

	return 0;

}*/