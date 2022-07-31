/*
 * ex5.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	int n=0;
	printf("Enter the number of elements: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&n);
	printf("Enter the array elements:");
	fflush(stdout);		fflush(stdin);
	int i;
	float arr[100];
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
	float numReq=0;
	printf("Enter the number required: ");
	fflush(stdout);		fflush(stdin);
	scanf("%f",&numReq);
	for(i=0;i<n;i++)
	{
		if(numReq==arr[i])
			break;
	}
	printf("It is at location %d",i+1);
	return 0;
}
