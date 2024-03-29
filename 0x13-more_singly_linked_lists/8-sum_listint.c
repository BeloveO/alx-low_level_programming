#include "lists.h"
/**
 * sum_listint - gets sum of all the data (n) of a listint_t linked list
 * @head: head of singly linked list
 * Return: sum of th data in list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
