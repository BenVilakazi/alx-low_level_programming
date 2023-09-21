#include "lists.h"
/**
 * list_len - num of elem in list
 * @h: singly linked list
 * Return: num of elem in list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
