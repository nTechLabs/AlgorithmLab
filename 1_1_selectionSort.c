#include <stdio.h>

int main(void){
	int i, j, temp, min, index;
	int array[10] = { 2, 4, 3, 8, 6, 1, 9, 7, 10, 5};
	
	for(i=0; i<10; i++){
		min = 9999;
		for(j=i; j<10; j++){
			if(min>array[j]){
				min = array[j];
				index = j;
			}
			
		}
			//swap
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;
	
	}    
	
	for(i =0 ; i < 10; i++){
		printf("%d ", array[i]);
	}
}




