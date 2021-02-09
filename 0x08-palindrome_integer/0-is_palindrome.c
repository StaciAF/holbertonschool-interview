#include "palindrome.h"

/**
 * is_palindrome - Function to check whether given unsigned int is a palindrome
 * @n: unsigned int to be checked as palindrome
 * Return: 1 for palindrome, 0 otherwise
 */

int is_palindrome(unsigned long n)
{
	unsigned long first_divisor = 1000000000000000000;
	unsigned long first_digit = n / first_divisor;
	unsigned long last_divisor = 10, last_digit;

	if (n < 10)
	{
		return (1);
	}
	while (first_digit == 0)
	{
		first_divisor /= 10;
		first_digit = n / first_divisor;
	}
	last_digit = n % last_divisor;
	while (first_digit == last_digit)
	{
		first_digit = n / first_divisor;
		last_digit = n % last_divisor;
		if (first_divisor < last_divisor)
		{
			printf("Is palindrome\n");
			return (1);
		}
		n -= first_divisor * first_digit;
		n /= 10;
		first_divisor /= 100;
	}
	printf("Is not palindrome\n");
	return (0);
}
