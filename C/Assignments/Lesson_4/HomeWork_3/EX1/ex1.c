/*
 * ex1.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	float arr1[2][2];
	float arr2[2][2];
	int i,j;
	printf("Enter the first array elements\n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the element %d%d: ",i,j);
			fflush(stdout);		fflush(stdin);
			scanf("%f",&arr1[i][j]);
		}

	}
	printf("Enter the second array elements\n");
	fflush(stdout);		fflush(stdin);
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the element %d%d: ",i,j);
			fflush(stdout);		fflush(stdin);
			scanf("%f",&arr2[i][j]);
		}

	}
	float sum=0;
	printf("the sum array elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=arr1[i][j]+arr2[i][j];
			printf("%f\t",sum);
		}
		printf("\n");
	}
	return 0;
}
