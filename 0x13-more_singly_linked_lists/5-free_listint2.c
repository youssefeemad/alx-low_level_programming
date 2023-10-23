#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
