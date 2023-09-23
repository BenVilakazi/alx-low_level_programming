#include "lists.h"
/**
 * get_nodeint_at_index - gets val of n for i node
 * @index: index of the node
 * @head: ptr to read
 * Return: val of n
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int iterator;

if (head == NULL)
return (NULL);

for (iterator = 0; head != NULL; iterator++)
{
if (iterator == index)
return (head);
else
head = head->next;
}

return (NULL);
}