#include "lists.h"
/**
 * sum_dlistint - fonction qui donne la somme des noeuds
 * @head: head, pointeur
 * Return: la somme des noeuds
 */
int sum_dlistint(dlistint_t *head)
{
const dlistint_t *tmp;
int sum = 0;

tmp = head;

while (tmp != NULL)
{
	sum += tmp->n;
	tmp = tmp->next;
}
return (sum);
}
