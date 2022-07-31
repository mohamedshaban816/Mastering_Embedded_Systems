/*
 * ex7.c
 *
 *  Created on: Jul 25, 2022
 *      Author: Mohamed Shaban
 */


#include<stdio.h>
int main()
{
	printf("Enter value of a: ");
	fflush(stdout);			fflush(stdin);
	int a=0,b=0;
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdout);			fflush(stdin);
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value of a= %d\n",a);
	printf("Value of b= %d\n",b);
	return 0;
}
