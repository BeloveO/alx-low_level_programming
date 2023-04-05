#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of linked list
 * @head: head of linked list
 * @index: index of node that should be deleted
 * Return: 1 (Success) or 0 (Failure)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int i;

	temp = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && temp != NULL; i++)
			temp = temp->next;
	}
	if (temp == NULL || (temp->next == NULL && index != 0))
		return (-1);

	current = temp->next;
	if (index != 0)
	{
		temp->next = current->next;
		free(current);
	}
	else
	{
		free(temp);
		*head = current;
	}
	return (1);
}
