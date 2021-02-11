#include "palindrome.h"

/**
 * is_palindrome - checks if unsigned int passed is a palindrome
 * @n: unsigned int passed to be checked as palindrome
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(unsigned long n)
{
	unsigned int remainder, reverse = 0, original;

	original = n;
	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}

	if (original == reverse)
		return (1);

	return (0);
}
