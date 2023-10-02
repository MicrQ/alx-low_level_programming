/**
 * _memcpy - copies n byte from src to dest
 * @dest: will be modified
 * @src: source file
 * @n: bytes
 * Return: modified version of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
