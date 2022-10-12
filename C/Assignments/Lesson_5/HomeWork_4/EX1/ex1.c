/*
 * ex1.c
 *
 *  Created on: Sep 4, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

void printPrime(int num1 , int num2);
int main(void)
{
	int num1,num2;
	printf("Enter two numbers (interval):");
	fflush(stdout);		fflush(stdin);
	scanf("%d%d",&num1,&num2);
	printPrime(num1,num2);
	return 0;
}

void printPrime(int num1 , int num2)
{
	int i, j , flag=0;
	for(i=num1+1;i<num2;i++)
	{
		flag=0;
		if(i==0 || i==1)
			flag=1;
		else
		{
			for(j=2;j<i/2;j++)
			{
				if(i%j == 0)
				{
					flag=1;
					break;
				}

			}
		}
		if(flag==0)
			printf("%d\t",i);
	}
}
