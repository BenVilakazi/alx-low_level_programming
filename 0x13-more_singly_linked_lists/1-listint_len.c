#include "lists.h"
/**
* listint_len - calc listlen
* @h: head ptr
* Return: num of nodes
**/
size_t listint_len(const listint_t *h)
{
size_t lenght = 0;

while (h != NULL)
{lenght++;
h = h->next;
}
return (lenght);
}