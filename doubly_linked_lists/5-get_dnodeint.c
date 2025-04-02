#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head, pointeur
 * @index: lieu rechercher
 * Return: adresse de nouveau noeud
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp;
unsigned int count = 0;

tmp = head;

if (head == NULL)
	return (NULL);

while (tmp != NULL && count != index)
{
	count++;
	tmp = tmp->next;
}

if (index == count)
	return (tmp);

else
	return (NULL);
}
