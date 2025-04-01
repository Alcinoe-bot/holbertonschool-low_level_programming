#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * list_t: liste of element
 * @head: pointeur
 * @str: pointeur
 * Return: number of char
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *num_c;
int i = 0;
while (str[i])
	i++;

num_c = malloc(sizeof(list_t));

if (num_c == NULL)
	return (NULL);

num_c->str = strdup(str);
num_c->len = i;
num_c->next = *head;
*head = num_c;

return (num_c);
}
