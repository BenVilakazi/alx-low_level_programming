#include "lists.h"
/**
* free_listint - frees a list of int
* @head: pointer to head
* Return: void
**/
void free_listint(listint_t *head)
{
listint_t *temp = NULL;

if (head == NULL)
return;

while (head->next != NULL)
{
temp = head;
head = head->next;
temp->n = '\0';
free(temp);
}
free(head);

}