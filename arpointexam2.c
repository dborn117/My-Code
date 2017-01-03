#include <stdio.h>
int main(void){
	int MAX_SIZE = 20;
	char deadlines[MAX_SIZE];

	printf("Enter four deadlines: ");
	fgets(deadlines, MAX_SIZE, stdin);

	printf("%s",deadlines);
	printf("\n");
	return 0;
}
