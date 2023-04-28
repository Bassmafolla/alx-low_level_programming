# inclure  " listes.h "
# inclure  < stdio.h >
/* *
* print_list - Imprime tous les éléments d'une liste list_t.
* @h : La liste list_t.
*
* Retour : Le nombre de nœuds dans h.
 */
size_t  print_list ( const  list_t *h)
{
taille_t nœuds = 0 ;
tandis que (h)
{
si (h-> str == NULL )
printf ( " [0] (nul) \n " );
autre
printf ( " [ %d ] %s \n " , h-> len , h-> str );
nœuds++ ;
h = h-> suivant ;
}
retour (nœuds);
}
