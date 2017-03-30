//David Born
#include <iostream>
#include "search_Born.h"
using namespace std;
search::search(){

int i;
for(i=1; i<20; i++){
	array[i] = i;
	}
}

void search::linear(){
	int num;
	//scan in num
	for(i=0; i<20; i++){
		if(array[i] = num){
			cout << "Number found\n" << array[i];
		}
}
