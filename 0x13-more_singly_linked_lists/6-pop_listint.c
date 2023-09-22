#include "lists.h"
/**
 * pop_listint - remove the head node
 * @head: ptr to ptr of head
 * Return: n val of head
 **/
int pop_listint(listint_t **head)
{
int n = 0;
listint_t *temp;

if (*head == NULL) /* lista vacia? */
return (0);
/* asignamos los valores de head a un temporal */
temp = *head;

n = temp->n; /* valor a retornar */
*head = temp->next; /* avanzamos head al siguiente nodo */
temp->n = '\0'; /* liberamos n de temp */
free(temp); /* liberamos puntero temp */

return (n); /* retornamos valor n */
}