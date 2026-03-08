/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Samuel Randles
 * ID: 201933992
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");

	scanf("%s", hex);

	for (int i = 0; i < strlen(hex); i++) {
		if (isxdigit(hex[i])) {
			if hex[i] > 
		}
	}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}