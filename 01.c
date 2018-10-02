#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int A;
	int time, second;
	
	printf("Input the second :");
	scanf("%i", &A);
	
	time = A/60;
	second = A%60;
	
	printf("The time is %i : %i", time, second);
	
	return 0;
}
