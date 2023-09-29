/**
 * iterator - number iterator
 * @i: starting point
 * @x: number to be found
 * Return: the prime or not value
 */
int iterator(int i, int x)
{
	if (i == 1)
		return (1);
	if (x % i == 0)
		return (0);
	return (iterator(i - 1, x));
}

/**
 * is_prime_number - prime number checking function
 * @n: number to check
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (iterator(n - 1, n));
}
