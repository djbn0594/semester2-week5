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
			switch (hex[i]) {
				case 'A':
				case 'a':
					decimal = decimal + 10;
				case 'B':
				case 'b':
					decimal = decimal + 11;
				case 'C':
				case 'c':
					decimal = decimal + 12;
				case 'D':
				case 'd':
					decimal = decimal + 13;
				case 'E':
				case 'e':
					decimal = decimal + 14;
				case 'F':
				case 'f':
					decimal = decimal + 15;
				if (isdigit(hex[i])) {
					decimal = decimal + hex[i];
				}
			}
		} 
		else {
			printf("Error: Invalid Hexadecimal\n");
		}

	}
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}