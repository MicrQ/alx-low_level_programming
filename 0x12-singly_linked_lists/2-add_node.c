#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning
 * @head: a pointer to the first node
 * @str: new data to be at the beginning
 * Return: the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
