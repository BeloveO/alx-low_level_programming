#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of singly linked list
 * @idx: index of list where new node should be added. Index starts at 0
 * @n: element of list
 * Return: new node at a given postion
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	temp = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
	}
	if (temp == NULL && idx != 0)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next =  new;
	}

	return (new);
}
