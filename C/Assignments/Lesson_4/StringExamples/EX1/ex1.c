/*
 * ex1.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	int freq=0;
	char str[100];
	printf("Enter your string: ");
	fflush(stdout);		fflush(stdin);
	gets(str);
	char charReq;
	printf("Enter the required character: ");
	fflush(stdout);		fflush(stdin);
	scanf("%c",&charReq);
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==charReq)
			freq++;
		i++;
	}
	printf("Character frequency=%d",freq);
	return 0;
}
