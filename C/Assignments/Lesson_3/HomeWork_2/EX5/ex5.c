/*
 * ex5.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Mohamed Shaban
 */


#include <stdio.h>

int main(void)
{
	char character;
	printf ("Enter the character you want to check: ");
	fflush(stdout);		fflush(stdin);
	scanf("%c",&character);
	if( (character >=65  && character <= 90) || (character >=97  && character <= 122) )
		printf("Your character is alphabet");
	else
		printf("Your character is not alphabet");
	return 0;
}
