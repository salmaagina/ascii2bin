/************************************/
/* Program Name: ascii2bin          */
/* Author: Salma Agina              */
/* Date: 2/28/2021                  */
/************************************/
/* Description:                     */
/* Validation Checks:               */
/* Enhancements:                    */
/************************************/

#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>

int main(int argc, char * argv[], char ** envp)
{

	char ascii_value;
	char digit;
	int offset = 48;
	int number = 0;
	int retval;

	retval = read(0, &ascii_value, 1);

	while (retval == 1) && (ascii_value != '\n'))
	{
	digit = ascii_value - offset;
	if ((digit == 1) || digit == 0))
	number = (number << 1) + digit;
	retval = read(0, &ascii_value, 1);
	}
	printf("%u\n", number);
	return 1;
}