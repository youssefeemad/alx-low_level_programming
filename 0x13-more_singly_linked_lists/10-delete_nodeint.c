#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL, *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (i == index)
		{
			prev->next = tmp->next;
			free(tmp);
			return (1);
		}
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
