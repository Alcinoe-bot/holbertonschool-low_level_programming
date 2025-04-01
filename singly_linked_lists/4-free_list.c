#include "lists.h"
/**
 * free_list - frees a list_t list
 * list_t: liste of element
 * @head: pointeur
 */
void free_list(list_t *head)
{
list_t *temporaire;
while (head != NULL)
{
	temporaire = head->next;
	free(head->str);
	free(head);
	head = temporaire;
}
return;
}
