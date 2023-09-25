#include "lists.h"
/**
 * reverse_listint - rev list
 * @head: ptr to head
 * Return: ptr to the head of rev list
 **/
listint_t *reverse_listint(listint_t **head)
{
listint_t *new_list, *temp;

new_list = NULL;

		while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = new_list;
		new_list = (*head);
		(*head) = temp;
	}
	(*head) = new_list;
	return (*head);
}