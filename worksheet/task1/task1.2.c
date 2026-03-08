// Worksheet 2.5

/* 
 * Task 1.2 - Practice
 * Write a program that allows a user to enter a series of positive numbers using a while loop. 
 * The loop should only stop when the user enters a -1.
 * The program then calculates and prints the average of these numbers. 
 */

#include <stdio.h>

int main(void) {
	float sum = 0;
	int i = 0;
	printf("--- Average Calculator ---\n");
	int add = 0;
    while (1){
		scanf("%d", &add);

		if (add == -1) {
			break;
		}
		
		sum += add;
		i++;
	}
	sum /= i;
	printf("%f", sum);
	return 0;
}