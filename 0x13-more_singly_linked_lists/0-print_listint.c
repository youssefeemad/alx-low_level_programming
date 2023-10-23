#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *pt;
	unsigned int count = 0;

	pt = h;
	while (pt)
	{
		printf("%d\n", pt->n);
		count++;
		pt = pt->next;
	}
	return (count);
}
