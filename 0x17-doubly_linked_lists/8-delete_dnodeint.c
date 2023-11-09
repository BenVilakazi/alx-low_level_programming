#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: head of dlist
 * @index: index to delete a node at
 * Return: Returns 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *auxiliar, *next, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	auxiliar = *head;
	i = 0;
	while (i != index)
	{
		if (auxiliar == NULL)
			return (-1);
		auxiliar = auxiliar->next;
		i++;
	}
	if (auxiliar == NULL)
		return (-1);
	next = auxiliar->next;
	prev = auxiliar->prev;
	if (index == 0)
	{
		if (auxiliar->next != NULL)
		{
			*head = auxiliar->next;
			next->prev = NULL;
		}
		else
		{
			free(auxiliar);
			*head = NULL;
			return (1);
		}
	}
	else
		prev->next = next;
	if (next != NULL)
		next->prev = prev;
	free(auxiliar);
	return (1);
}