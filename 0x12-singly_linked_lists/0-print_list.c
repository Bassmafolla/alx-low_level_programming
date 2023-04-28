#include <stdio.h>
#include "listes.h"
/**
* print_list - imprime tous les éléments d'une liste chaînée
* @h : pointeur vers la liste list_t à imprimer
*
* Retour : le nombre de nœuds imprimés
*/
size_t print_list(const list_t *h)
{
taille_t s = 0 ;
tandis que (h)
{
si (!h->chaîne)
printf("[0] (néant)\n");
autre
printf("[%u] %s\n", h->len, h->str);
h = h->suivant ;
s++ ;
}
Retour);
}
