#include "lists.h"
/**
 * free_dlistint - frees a linked list nodes
 * @head: pointer to head
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
dlistint_t *auxiliar = head;

while (head != NULL)
{
auxiliar = head;
head = head->next;
free(auxiliar);
}
}