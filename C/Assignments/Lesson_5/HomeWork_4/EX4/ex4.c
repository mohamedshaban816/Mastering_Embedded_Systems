/*
 * ex4.c
 *
 *  Created on: Sep 4, 2022
 *      Author: Mohamed Shaban
 */

#include <stdio.h>

/*
 *   2*calc(2,3)
 *     2*calc(2,2)
 *       2*calc(2,1)
 *         2*calc(2,0)
 *           1
 *
 * */


int calcPower(int base, int power);
int main(void)
{
	int base;
	int power;
	printf("Enter the base:");
	fflush(stdout);		fflush(stdin);
	scanf("%d",&base);
	printf("Enter the power(positive):");
	fflush(stdout);		fflush(stdin);
	scanf("%d", &power);
	printf("the result =%d",calcPower(base,power));
	fflush(stdout);
	return 0;
}

int calcPower(int base, int power)
{
	if(power != 0)
		return base*calcPower(base,power-1);
	else
		return 1;

}
