#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head, double pointeur
 * @n: number of new value for new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tmp, *new;

tmp = *head;
new = malloc(sizeof(dlistint_t));

if (new == NULL)
	return (NULL);

new->next = NULL;
new->prev = NULL;
new->n = n;

if ((*head) == NULL)
{
	*head = new;
	return (new);
}

while (tmp->next)
	tmp = tmp->next;

new->prev = tmp;
tmp->next = new;
return (new);
}
