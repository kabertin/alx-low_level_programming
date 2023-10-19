#include "lists.h"

/**
 * list_len - shows the length of the linked list
 * @h: pointer to the 1st node
 *
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
