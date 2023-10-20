#ifndef MY_LISTS
#define MY_LISTS

/**
 * struct list_s - singly linked lists
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: pointes to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);

#endif
