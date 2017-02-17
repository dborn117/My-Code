// David Born
#include <stdio.h>
#include <string.h>
char recursion(int i);
int main(void){

char i;
//char array[5][14];
//int maxsize = 14;
//FILE *fp;
//fp = fopen("..Desktop/Semester2/ExamIO.txt", "r");
recursion(i);

return 0;
}

char recursion(int i){
FILE *fp;
fp = fopen("../Desktop/Semester2/ExamIO.txt", "r");
//read(fpm, str);
char array[5][14];

	for(i=0; i<5; i++){
		for(i=0; i<14; i++){
			fscanf(fp, "%c", array[5][14]);
		}
	}
}

