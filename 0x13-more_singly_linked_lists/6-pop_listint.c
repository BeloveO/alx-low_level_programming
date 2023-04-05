#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the singly linked list
 * Return: the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp, *current;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	current = temp->next;
	free(temp);
	*head = current;

	return (n);
}
