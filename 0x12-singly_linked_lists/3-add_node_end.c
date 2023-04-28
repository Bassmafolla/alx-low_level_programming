# inclure  " listes.h "
# inclure  < chaîne.h >
/* *
* add_node_end - Ajoute un nouveau nœud à la fin
* d'une liste list_t.
* @head : place actuelle dans la liste.
* @str : Chaîne à ajouter à la tête.
*
* Retour : Si la fonction échoue - NULL.
* Sinon - l'adresse du nouvel élément.
 */
list_t * add_node_end ( list_t **head, const  char *str)
{
caractère *d ;
longueur entière ;
list_t *nouveau, *dernier ;
new = malloc ( sizeof ( list_t ));
si (nouveau == NULL )
retour ( NULL );
d = strdup (str);
si (chaîne == NULL )
{
gratuit (nouveau);
retour ( NULL );
}
pour (len = 0 ; str[len];)
len++;
nouveau-> str = d ;
nouveau-> len = len;
nouveau-> suivant = NULL ;
si (*tête == NULL )
*tête = nouveau ;
autre
{
dernier = *tête ;
while (dernier-> suivant != NULL )
dernier = dernier-> suivant ;
dernier-> suivant = nouveau ;
}
retour (*tête);
}
