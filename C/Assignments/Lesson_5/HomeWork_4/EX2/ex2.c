/*
 * ex2.c
 *
 *  Created on: Sep 4, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int fact(int num);
int main(void)
{
	int num=0;
	printf("Enter your number:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&num);
	printf("the factorial of %d : %d", num ,fact(num));
	return 0;
}
int fact(int num)
{
	if (num==0||num==1)
		return 1;
	else
		return num*fact(num-1);
}
