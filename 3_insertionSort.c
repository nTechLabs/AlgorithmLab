#include <stdio.h>

int main(void){
	
	int i, j, temp =0;
	int array[10]={1,3,5,7,9,2,4,6,8,10};
	int len = sizeof(array)/sizeof(int);
	for(i=0; i<len-1; i++){
		for(j=i; j>=0; j--){
			if(array[j] > array[j+1]){
				temp=array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	for( i=0; i<len; i++){
		printf("%d ", array[i]);
	}
	return 0;
}

/* 
while(j>=0 && array[j] > array[j+1]){
			temp=array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
*/		
