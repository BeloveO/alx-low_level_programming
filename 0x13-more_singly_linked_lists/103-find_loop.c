#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head in a linked list
 * Return: address of the node where the loop starts or NULL if none
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *curr = head;

	while (head && temp && temp->next)
	{
		head = head->next;
		temp = temp->next->next;
		if (head == temp)
		{
			head = curr;
			curr = temp;
			while (1)
			{
				temp = curr;
				while (temp->next != head && temp->next != curr)
				{
					temp = temp->next;
				}
				if (temp->next == head)
					break;
				head = head->next;
			}
			return (temp->next);
		}
	}
	return (NULL);
}
