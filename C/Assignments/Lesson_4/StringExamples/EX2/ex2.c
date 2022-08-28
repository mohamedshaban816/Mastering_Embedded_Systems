/*
 * ex2.c
 *
 *  Created on: Jul 31, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int main(void)
{
	int len=0;
	char str[100];
	printf("Enter your string: ");
	fflush(stdout);		fflush(stdin);
	gets(str);
	int i=0;
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	printf("Length=%d",len);
	return 0;
}
