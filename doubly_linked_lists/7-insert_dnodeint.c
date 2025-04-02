#include "lists.h"
#include "1-dlistint_len.c"
#include "5-get_dnodeint.c"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * dlistint_len - prints all the elements of a dlistint_t list
 * add_dnodeint - function adds a new node at the beginning of a dlistint list
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * get_dnodeint - returns the nth node of a dlistint_t linked list
 * @h: head, list
 * @idx: index
 * @n: valeur nouveau noeud
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int nb_node = 0;
dlistint_t *tmp, *new, *current_node;

nb_node = dlistint_len(*h);

if (*h == NULL || idx == 0 || nb_node == 0)
	return (add_dnodeint(h, n));

if (nb_node == idx)
	return (add_dnodeint_end(h, n));

if (idx > nb_node)
	return (NULL);

tmp = malloc(sizeof(dlistint_t));

if (tmp == NULL)
	return (NULL);

new = *h;
current_node = get_dnodeint_at_index(new, idx);
tmp->n = n;
tmp->prev = current_node->prev;
tmp->next = current_node;

if (current_node->prev != NULL)
	current_node->prev->next = tmp;

current_node->prev = tmp;
return (tmp);
}
