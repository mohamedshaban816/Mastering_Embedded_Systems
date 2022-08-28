/*
 * ex3.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int len=0;
	char str[100];
	char strNew[100];
	printf("Enter your string: ");
	fflush(stdout);		fflush(stdin);
	gets(str);
	len=strlen(str);
	int i=0,j=0;
	for(i=len-1;i>=0;i--)
	{
		strNew[i]=str[j];
		j++;
	}
	puts(strNew);
	return 0;
}
