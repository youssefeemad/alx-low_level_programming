#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to head of list
 *
 * Return: sum of all data, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		sum += head->n;

		head = head->next;
	}

	return (sum);
}
