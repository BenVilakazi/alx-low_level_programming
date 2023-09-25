#include "lists.h"
/**
 * delete_nodeint_at_index - removes a node at specified index number
 * @index: index of node to be removed
 * @head: ptr to head
 * Return: 1 succed - -1 failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int iterator = 0;
listint_t *temp = *head, *new_node;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

while (temp != NULL)
{
if (iterator == (index - 1))
{
new_node = temp->next;
temp->next = new_node->next;
free(new_node);
return (1);
}
iterator++;
temp = temp->next;
}
return (-1);
}