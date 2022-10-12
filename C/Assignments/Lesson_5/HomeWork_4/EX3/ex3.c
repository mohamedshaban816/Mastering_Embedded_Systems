/*
 * ex3.c
 *
 *  Created on: Sep 4, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

void reverseString(void);
int main(void)
{
	printf("Enter your string: ");
	fflush(stdout);		fflush(stdin);
	reverseString();
	return 0;
}
void reverseString(void)
{
	char character;
	scanf("%c",&character);
	if(character!='\n')
	{
		reverseString();
		printf("%c",character);
	}

}
