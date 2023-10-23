#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list.
 * @head: Address of the first node of a list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tp;
	size_t count = 0;

	tp = head;
	while (tp != NULL)
	{
		printf("[%p] %d\n", (void *)tp, tp->n);
		count++;
		if (tp->next >= tp)
		{
			printf("-> [%p] %d\n", (void *)tp->next, tp->next->n);
			break;
		}
		tp = tp->next;
	}
	return (count);
}
