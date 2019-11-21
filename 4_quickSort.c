#include <stdio.h>

	void quickSort(int *data, int start, int end){
		if(start > end){
			return;
		}
		
		int key = start;
		int i = start +1;
		int j = end;
		int temp;
		
		while(i < j ){
			while(i<=end && data[i] <= data[key]){  //key값보다 큰 값을 찾을 때 까지 증가시킨다. ---> 우측으로 이동  
				i++;
			}
			
			while(j > start && data[j] >= data[key]){ // 키값보다 작은 값을 찾을 때 까지 증가시킨다.   <---- 좌측으로 이동  
				j--;
			}
			
			if(i > j){     // 엇갈렸을 경우 키 값과 키값보다 작은 값으로 검색된 j원소를  Swap 한다. 
				temp = data[j];
				data[j]	= data[key];
				data[key] = temp;		
			}else{       // 엇갈리지 않았을 경우에는 검색된 i 번째의 큰값과 검색된 j 번째의 작은 갑을 Swap 해 준다. 
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
		
		quickSort(data, start, j-1);  // pivot을 기준으로 왼쪽 부분 퀵 소팅  pivot을 기준으로 왼쪽 부분 퀵 소팅 
		quickSort(data, j+1, end);    // Pivot을 기준으로 우측 부분 퀵 소틍 
		
	}
	
int main(void)
{
	int data[10] = {1,3,5,7,9,2,4,6,8,10};
	int number =10;
	int i =0;
	
	//requsion
	quickSort(data, 0, number-1);   // 전체 데이타에 대해서 퀵소팅을 시작한다.  
	
	for(i=0; i < number; i++){
		printf("%d ", data[i]);
	}
	
}
