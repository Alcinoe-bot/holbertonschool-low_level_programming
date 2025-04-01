#include "lists.h"
/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * list_t: liste of element
 * @head: pointeur
 * @str: pointeur
 * Return: number of char
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *num_c, *f;
int i = 0;
while (str[i])
	i++;

num_c = malloc(sizeof(list_t));

if (num_c == NULL)
	return (NULL);

num_c->str = strdup(str);
num_c->len = i;
num_c->next = NULL;

if (strdup(str) == NULL)
{
	free(num_c);
	return (NULL);
}
if (*head == NULL)
{
	*head = num_c;
	return (num_c);
}
else
{
f = *head;
while (f->next != NULL)
	f = f->next;

f->next = num_c;
return (num_c);
}
}
