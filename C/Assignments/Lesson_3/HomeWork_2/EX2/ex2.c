/*
 * ex2.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

int main()
{
	char character=0;
	printf("Enter the character you want to check: ");
	fflush(stdout);			fflush(stdin);
	scanf("%c",&character);
	if(character=='a' ||character=='e' ||character=='i' ||character=='o' ||character=='u'
	   ||character=='A' ||character=='E' ||character=='I' ||character=='O' ||character=='U')
		printf("Your character is vowel");
	else
		printf("Your character is constant");






}
