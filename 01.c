#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int year;
	int result;
	
	printf("Input the year :");
	scanf("%d", &year);
	
	result = (year%4==0) && (year%100 !=0) || (year%400==0);
	
	printf("%d\n", result);
	
}
