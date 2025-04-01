#include "lists.h"
/**
 * list_len - prints all the elements of a list_t list
 * list_t: liste of element
 * @h: pointeur
 * Return: count
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
return (count);
}
