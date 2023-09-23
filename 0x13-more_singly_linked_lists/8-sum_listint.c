#include "lists.h"
/**
 * sum_listint - calc the val of the sum of n for list
 * @head: ptr to head
 * Return: sum of all n
 **/
int sum_listint(listint_t *head)
{
int iterator, sum = 0;

if (head == NULL)
return (0);

for (iterator = 0; head != NULL; iterator++)
{
sum += head->n;
head = head->next;
}
return (sum);
}