/*
 ============================================================================
 Name        : Ex_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : C program to calculate the sum of natural numbers, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum=0;
	int x;
	printf("Enter an integer : ");
	fflush(stdout);
	scanf("%d",&x);
	for (int i=0;i<=x;i++)
	{
		sum+=i;
	}
	printf("sum = %d ",sum);

}
