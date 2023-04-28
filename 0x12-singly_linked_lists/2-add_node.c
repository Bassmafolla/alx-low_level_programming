# inclure  " listes.h "
# inclure  < stdlib.h >
/* *
* _strlen - obtient la longueur de la chaîne
* @s : chaîne
* Retour : longueur de la chaîne
 */
int  _strlen ( const  char *s)
{
index entier ;
pour ( indice = 0 ; s[ indice ]; indice ++)
;
retour ( index );
}
/* *
* add_node - ajoute de nouveaux nœuds à la liste
* @head : un pointeur vers l'en-tête de la liste list_t.
* @str : La chaîne à ajouter à la liste list_t.
* Retour : pointeur vers la position actuelle dans la liste
 */
list_t * add_node ( list_t **head, const  char *str)
{
int  index , len;
caractère *contenu ;
list_t *nouveau ;
si (chaîne == NULL || tête == NULL )
retour ( NULL );
len = _strlen (str);
nouveau = *tête ;
content = malloc ((len + 1 ) * sizeof ( char ));
si (contenu == NULL )
retour ( NULL );
for ( index = 0 ; str[ index ]; index ++)
contenu[ index ] = str[ index ] ;
new = malloc ( sizeof ( list_t ));
si (nouveau == NULL )
{
gratuit (contenu);
retour ( NULL );
}
nouveau-> str = contenu ;
nouveau-> len = len;
nouveau-> suivant = *tête ;
*tête = nouveau ;
retour (nouveau);
}
