#include <stdio.h>
#include "swap.c"

int main(void){
	int i, j, temp;
	int array[10] = {2, 4, 3, 8, 6, 1, 9, 7, 10, 5 };
	int len = sizeof(array)/sizeof(int);
	
	for(i=0; i<len; i++){
		for(j=0; j<len-i; j++){
			if(array[j]>array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		}
	}
	for( i =0; i<len; i++){
		printf("%d,", array[i]);
	}
}
