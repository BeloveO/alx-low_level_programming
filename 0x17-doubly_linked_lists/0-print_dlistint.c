#include "lists.h"
/**
 * print_dlistint - prints the elemnts of the list
 * @h: head of the list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (nodes);
	
	while (h->prev != NULL)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
