#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (n);
}
