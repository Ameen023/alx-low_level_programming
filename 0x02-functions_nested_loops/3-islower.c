#include “main.h”
/**
 *_is lower – check if char is lowercase 
 *@c: is the char to be checked
 *Return: 1 if char is lower case, otherwise 0.
 */

int _islower(int c)
{
	If (c >= ‘a’ && c <= ‘z’)
		return(1);
	else
		return(0);
}
