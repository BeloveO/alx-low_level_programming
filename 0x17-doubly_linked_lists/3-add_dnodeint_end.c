#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of linked list
 * @head: head of the list
 * @n: value of the element
 * Return: address of new elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = h;

	return (new);
}

