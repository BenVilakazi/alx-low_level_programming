#include "lists.h"
/**
 * print_dlistint - prints a linked list
 * @h: pointer to linked list
 * Return: Number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
size_t lenght = 0;
while (h != NULL)
{
printf("%d\n", h->n);
lenght++;
h = h->next;
}
return (lenght);
}
