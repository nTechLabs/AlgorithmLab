#include <stdio.h>
#include "swap.c"

int main(void){
	int x = 3;
	int y = 5;
	
	swap(&x, &y);
	printf("x = %d, Y=%d", x, y);
}
