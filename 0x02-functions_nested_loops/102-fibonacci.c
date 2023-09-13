#include <stdio.h>

/** 
 *main – prints first 50 Fibbonaci numbers, starting with 1 and 2, 
 *	separate by a comma followed by a space.
 *
 *Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = , fib 2=1, sum;
	
	for (count=0; count < 50; count ++)
	{
		Sum = fib1 + fib2;
		Printf(“%lu”, sum);
		
		fib1 = fib2;
		 fib2 = sum;

		if (count == 49)
			printf(“\n”);
		else 
			printf(“,  “);
	}
	return (0);
}
