#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
size_t print_list(const list_t *h);
/**
 * struct list_s - Structure d'un noeud d'une liste chainee
 * @str: chaine de caractere
 * @next: Pointeur vers le noeud suivant dans la liste chainee
 */
typedef struct list_s {
	char *str;
	struct list_s *next;
} list_t;
#endif
