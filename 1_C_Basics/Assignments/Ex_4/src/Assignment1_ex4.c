/*
 ============================================================================
 Name        : Assignment1_ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : product of two numbers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("the product = %f",x*y);
	return 0;
}
