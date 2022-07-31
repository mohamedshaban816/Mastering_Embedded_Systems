/*
 * ex4.c
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
	float insertNum=0;
	printf("Enter the number to insert: ");
	fflush(stdout);		fflush(stdin);
	scanf("%f",&insertNum);
	int loc=0;
	printf("Enter the position: ");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&loc);
	int index=n;
	while(index!=loc-1)
	{
		arr[index]=arr[index-1];
		index--;
	}
	arr[index]=insertNum;
	for(i=0;i<=n;i++)
		printf("%f\t",arr[i]);
	return 0;
}
