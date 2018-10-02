#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int d;
	int Hour, Time, sec;
	int result;
	
	printf("Input the second : ");
	scanf("%d", &sec);
	
	Hour = sec/3600;
	result = sec%3600;
	Time = result/60;
	sec = sec%60;
	
	printf("The time is %d : %d : %d", Hour, Time, sec);
	
	return 0;
	
}
