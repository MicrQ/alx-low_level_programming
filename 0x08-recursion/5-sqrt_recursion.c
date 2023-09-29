
/**
 * fact - root checker
 * @i: numbers to iterate
 * @r: number to compute tge root
 * Return: result
 */
int fact(int i, int r)
{
	if (i < 2)
		return (-1);
	if (i * i == r)
		return (i);
	return (fact(i - 1, r));
}



/**
 * _sqrt_recursion - computes the square root
 * @n: given number to search sqrt
 * Return: the sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (fact(n/2, n));
}
