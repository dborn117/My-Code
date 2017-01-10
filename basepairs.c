#include <stdio.h>
#include <string.h>
int main(void){
	char maxsize = 100;
	char cgat[maxsize];

	int C = 0, G = 0, A = 0, T = 0;

	printf("Type in C, G, A, or T\n");
	fgets(cgat, maxsize, stdin);

	int i = 0;
	for(i=0; i < strlen(cgat); i++){
		if (cgat[i] == 'C'){
			C++;
		}
		else if (cgat[i] == 'G'){
			G++;
		}
		else if (cgat[i] == 'A'){
			A++;
		}
		else if (cgat[i] == 'T'){
			T++;
		}
	}
	printf("C:%d, G:%d, A:%d, T:%d\n", C, G, A, T);

	for(i=0; i < strlen(cgat); i++)
		if (C + G < A + T){
			printf("Intron\n");
				break;
		}
		else if ((C + G)* 0.4 > A + T){
			printf("Extron\n");
				break;
		}
		else{
			printf("Unknown\n");
				break;
		}

	for (i=0; i<strlen(cgat); i++){
		if (cgat[i] == 'C'){
			'C' = G;
		}

		if (cgat[i] == 'G'){
			'G' = 'C';
		}

		if (cgat[i] == 'A'){
			'A' = 'T';
		}

		if (cgat[i] == 'T'){
			'T' = 'A';
		}
}
'
		printf("Reverse = %s\n", cgat);

return 0;
}
