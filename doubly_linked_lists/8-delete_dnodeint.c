#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node in a list
 * @head: head, double pointeur
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp;
unsigned int dex = 0;

if (head == NULL || *head == NULL)
	return (-1);

if (index == 0)
{
	tmp = *head;
	if (tmp->next != NULL)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
	}
	else
		*head = NULL;

	free(tmp);
	return (1);
}

tmp = *head;

while (tmp != NULL && dex < index)
{
	tmp = tmp->next;
	dex++;
}
if (tmp == NULL)
	return (-1);

if (tmp->next != NULL)
	tmp->next->prev = tmp->prev;

if (tmp->prev != NULL)
	tmp->prev->next = tmp->next;

free(tmp);
return (1);
}
