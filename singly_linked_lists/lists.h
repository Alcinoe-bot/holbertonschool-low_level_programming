#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
/**
 * struct list_s - Structure d'un noeud d'une liste chainee
 * @str: chaine de caractere
 * @len: taille de la string
 * @next: Pointeur vers le noeud suivant dans la liste chainee
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
