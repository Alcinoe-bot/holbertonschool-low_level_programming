#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head, pointeur
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp;
int count = 0;

tmp = h;
while (tmp != NULL)
{
	printf("%d\n", tmp->n);
	tmp = tmp->next;
	count++;
}
return (count);
}
