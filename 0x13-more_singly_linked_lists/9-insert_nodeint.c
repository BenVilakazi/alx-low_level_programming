#include "lists.h"
/**
 * list_size - funt for len elemnt
 * @h: single list in
 * Return: num of elem in the linked lis
 */
int list_size(listint_t **h)
{
	listint_t *auxiliar;
	int i = 0;

	auxiliar = *h;
	while (auxiliar != NULL)
	{
		i++;
		auxiliar = auxiliar->next;
	}
	return (i);
}
/**
 * insert_nodeint_at_index - insert new node in the index position
 * @head: linked list
 * @idx: index, it start in 0
 * @n: data for new node
 * Return: Always addres new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int iterator = 0;
unsigned int lenght = list_size(head);
listint_t *auxiliar = *head;
listint_t *new_node = NULL;

if (head == NULL || idx > lenght)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	
	while (auxiliar != NULL)
	{
		if (iterator == (idx - 1))
		{
			new_node->next = auxiliar->next;
			auxiliar->next = new_node;
			return (new_node);
		}
		auxiliar = auxiliar->next;
		iterator++;
	}
	return (NULL);
}