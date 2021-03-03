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
	int count = 0;
	int offset = 48;
	int number = 0;
	int retval;

retval = read(0, &ascii_value, 1);
{
	while (retval == 1)
		count++;
}
digit = ascii_value - offset;
number = (number << 1) + digit;
retval = read(0, &ascii_value, 1);

printf("%u\n", number);
return 0;