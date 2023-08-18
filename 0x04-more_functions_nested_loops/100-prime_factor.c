#include <stdio.h>



/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	unsigned long long n = 612852475143LL;
	int k = 2;

	while (n != k)
	{
		if (n % k == 0)
		{
			n = n / k;
		}
		else
		{
			k++;
		}
	}
	printf("%llu\n", n);
	return (0);
}
