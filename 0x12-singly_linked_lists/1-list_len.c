# inclure  " listes.h "
# inclure  < stddef.h >
# inclure  < stdlib.h >
/* *
* list_len - Trouve le nombre de nœuds dans une liste.
* @h : La liste liée list_t.
* Retour : Nombre d'éléments dans une liste chaînée.
 */
size_t  list_len ( const  list_t *h)
{
index entier ;
pour ( indice = 0 ; h ; indice ++)
h = h-> suivant ;
retour ( index );
}
