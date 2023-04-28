# ifndef LISTS_H
# définir  LISTS_H

# inclure  < stdlib.h >

/* *
* struct list_s - liste liée individuellement
* @str: chaîne - (chaîne mallocée)
* @len : longueur de la chaîne
* @next : pointe vers le nœud suivant
*
* Description : structure de nœuds de liste à liens uniques
* pour le projet Holberton
 */
typedef  structure list_s
{
	char *str;
	 longueur entière non signée ;
	struct list_s *suivant ;
} liste_t ;

size_t  print_list ( const  list_t *h);
size_t  list_len ( const  list_t *h);
list_t * add_node ( list_t **head, const  char *str);
list_t * add_node_end ( list_t **head, const  char *str);
void  free_list ( list_t *head);

# endif  /* LISTS_H */
