#include "lists.h"
/**
* print_listint - list of int
* @h: ptr to node
* Return: num of nodes
**/
size_t print_listint(const listint_t *h)
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