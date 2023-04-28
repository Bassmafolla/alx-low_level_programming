# inclure  " listes.h "
# inclure  < stdlib.h >
/* *
* free_list - Libère une liste chaînée.
* @head : List_t liste à libérer.
 */
void  free_list ( list_t *head)
{
list_t *tmp;
tandis que (tête)
{
tmp = tête-> suivant ;
libre (head-> str );
libre (tête);
tête = tmp ;
}
}
