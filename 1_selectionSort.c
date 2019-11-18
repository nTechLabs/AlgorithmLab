#include <stdio.h>
#include "swap.c"

int main(void){
	int i, j, index, min, temp;
	int array[10] = {2, 4, 3, 8, 6, 1, 9, 7, 10, 5 };
	int len = sizeof(array)/sizeof(int);
	for(i=0; i<len; i++){
		min=9999;
		for(j =i; j<len; j++){
			if(min>array[j]){
				min = array[j];
				index=j;
			}
		}
		swap(&array[i], &array[index]);
	}
	
	for( i=0; i<len; i++){
		printf("%d,", array[i]);
	}
	return 0;
}
