// David Born
#include <stdio.h>
void print_board(char tic[][2]);
void fill_array(char tic[][2]);
int main(void){
	char tic[2][2];
	fill_array(tic);
	print_board(tic);
return 0;
}

void print_board(char tic[][]){
	printf("  %c | %c\n---|---\n  %c | %c\n",tic[0][0],tic[1][0],tic[0][1],tic[1][1]);
}


void fill_array(char tic[2][2]){
	tic[0][0] = 'X';
	tic[0][1] = 'O';
	tic[1][0] = 'X';
	tic[1][1] = 'O';
}
