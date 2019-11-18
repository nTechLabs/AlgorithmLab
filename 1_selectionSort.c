#include <stdio.h>
int main(void){
	int i, j, index, min, temp;
	int array[10] = {1, 10, 5, 8 ,7, 6 , 4, 3, 2, 9 };
	int len = sizeof(array)/sizeof(int);

	for(i=0; i<len; i++){
		min=9999;
		for(j =i; j<len; j++){
			if(min>array[j]){
				min = array[j];
				index=j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index]=temp;
	}
	
	for( i=0; i<len; i++){
		printf("%d,", array[i]);
	}
	return 0;
}
