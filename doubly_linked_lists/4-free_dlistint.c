#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: head, pointeur
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

tmp = head;
while (tmp != NULL)
{
	free(tmp);
	tmp = tmp->next;
}
return;
}
