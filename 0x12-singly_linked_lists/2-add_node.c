#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head of linked list
 * @str: string to store in the list
 * Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
