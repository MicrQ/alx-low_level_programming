#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node to the end of the list
 * @head: a pointer to the first node
 * @str: the data to be added on the new node
 * Return: the address of the new node or NULL if the program fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *Head = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

	while (Head != NULL)
		Head = Head->next;
	Head = ptr;
	return (ptr);
}
