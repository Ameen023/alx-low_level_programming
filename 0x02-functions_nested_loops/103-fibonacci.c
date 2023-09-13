#include <stdio.h>

/**
 * main – finds a new prints the sums of the sum of the even-valued terms
 * followed by a new line 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (I = 1; I <= 33; ++1)
	{
		If (j < 4000000 && (j % 2) == 0)
		{
			Sum = sum + j;
		}
		next = j + k;
 		j = k;
		k = next;
	}
	printf(“%lu\n", sum);

	return (0);
}
