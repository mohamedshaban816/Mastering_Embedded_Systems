/*
 * ex4.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	float num=0;
	printf("Enter the number: ");
	fflush(stdout);			fflush(stdin);
	scanf("%f",&num);
	if(num>0)
		printf("Your number is positive");
	else if(num<0)
		printf("Your number is negative");
	else
		printf("Your number is zero");
	return 0;
}
