/*David Born*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void){

char ing_letter;
float total;
int qty = 0;
int tur = 0;
int cran = 0;
int stuff = 0;
int squash = 0;
int gravy = 0;
int mpot = 0;
int spot = 0;
int apie = 0;

printf("What ingredients do you need for Thanksgiving?\n");
        scanf("%c", &ing_letter);

while (ing_letter != 'z'){

	printf("What ingredients do you need for Thanksgiving?\n");
        scanf("%c", &ing_letter);

	if (ing_letter == 't'){
		printf("How many turkeys do you need?\n");
		scanf("%d", &qty);
		tur = tur + qty;
	}
	else if (ing_letter == 'c'){
        	printf("How many cranberry sauces do you need?\n");
        	scanf("%d", &qty);
		cran = cran + qty;
	}
	else if (ing_letter == 's'){
        	printf("How much stuffing do you need?\n");
        	scanf("%d", &qty);
		stuff = stuff + qty;
	}
	else if (ing_letter == 'q'){
        	printf("How much squash do you need?\n");
        	scanf("%d", &qty);
		squash = squash + qty;
	}
	else if (ing_letter == 'g'){
        	printf("How much gravy do you need?\n");
        	scanf("%d", &qty);
		gravy = gravy + qty;
	}
	else if (ing_letter == 'm'){
        	printf("How much mashed potatoes do you need?\n");
        	scanf("%d", &qty);
		mpot = mpot + qty;
	}
	else if (ing_letter == 'p'){
        	printf("How much sweet potatoes do you need?\n");
        	scanf("%d", &qty);
		spot = spot + qty;
	}
	else if (ing_letter == 'a'){
        	printf("How many apple pies do you need?\n");
        	scanf("%d", &qty);
		apie = apie + qty;
	}
	else if (ing_letter == 'z'){
                continue;
	}
	/*else{
	     printf("This ingredient is not available\n:");
	}


	printf("What other ingredients do you need for Thanksgiving?");
       	scanf("%c", &ing_letter);*/

}

total = ((tur * 23.09) + (cran * 1.5) + (stuff * 3.12) + (squash * 1.75) + (gravy * 2.4) + (mpot * 3.02) + (spot * 2) + (apie * 8.49));

if (tur > 0){
	printf("Turkey: %d\n", tur);
}

printf("Total: $%.2f\n", total);

return 0;
}

