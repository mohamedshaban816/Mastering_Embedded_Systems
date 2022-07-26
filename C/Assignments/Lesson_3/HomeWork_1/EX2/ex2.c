/*
 * ex2.c
 *
 *  Created on: Jul 25, 2022
 *      Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	printf("Enter an integer: ");
	fflush(stdout);
	int num=0;
	scanf("%d",&num);
	printf("You entered: %d\n",num);
	return 0;
}
