#include <stdio.h>

/**
 *main  - Fibonacci < 3
 *
 *purpose – no hardcore
 *
 *
*/

int main(void)
{
	unsigned  long int i;
	unsigned  long int bef = 1;
	unsigned  long int aft =2;
	unsigned  long l  = 1000000000;
	unsigned  long int bef1;
	unsigned  long int bef2;
	unsigned  long int aft 1;
	unsigned  long int aft 2;

	printf(“%lu” , bef);

	for (i = 1; i < 91; i++)
	{
		printf(“, %lu” , aft);
		aft+=bef;
		bef = aft – bef;
	}

	bef1 = (bef / 1);
	bef2 = (bef % 1);
	aft1 = (aft / 1);
	aft2 = (aft % 1);

	for (i = 92; i < 99; ++i)
	{
		printf( “, %lu” , aft1 + (aft2 /1));
		printf( “, %lu”, aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef1 = aft2 + bef2;
	}
	print(“\n");
	return(0);
}
