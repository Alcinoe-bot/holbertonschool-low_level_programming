#include "lists.h"
/**
 * dlistint_len - meme fonction mais sans affiche
 * @h: head, pointeur
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp;
int count = 0;

tmp = h;
while (tmp != NULL)
{
	count++;
	tmp = tmp->next;
}
return (count);
}
