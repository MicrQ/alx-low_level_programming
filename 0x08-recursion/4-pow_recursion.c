/**
 * _pow_recursion - calculates x raised by y
 * @x: number to be multiplied by itself y times
 * @y: power of x
 * Return: the result of x**y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return 1;
	return (x * _pow_recursion(x, y - 1));
}
