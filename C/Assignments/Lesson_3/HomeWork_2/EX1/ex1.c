/*
 * ex1.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	int num=0;
	printf("Enter the integer you want to check: ");
	fflush(stdout);			fflush(stdin);
	scanf("%d",&num);
	if(num%2==0)
		printf("Num is Even");
	else
		printf("Num is Odd");
	return 0;
}
