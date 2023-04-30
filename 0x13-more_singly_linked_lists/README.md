C - Plus de listes liées individuellement DIR 📁 Tests ✔️ test : Annuaire des Tests.
lists.h : le fichier lists.h contient les prototypes des fonctions.
Fichier Prototype struct listint_s int n struct listint_s *next typedef listint_t struct listint_s 0-
print_listint.c size_t print_listint(const listint_t *h); 1-listint_len.c size_t listint_len(const listint_t *h);
2-add_nodeint.c listint_t *add_nodeint(listint_t **head, const int n); 3-add_nodeint_end.c listint_t
*add_nodeint_end(listint_t **head, const int n); 4-free_listint.c void free_listint(listint_t *head); 5-
free_listint2.c void free_listint2(listint_t **head); 6-pop_listint.c int pop_listint(listint_t **head); 7-
get_nodeint.c listint_t *get_nodeint_at_index(listint_t *head, index int non signé); 8-sum_listint.c
int sum_listint(listint_t *head); 9-insert_nodeint.c listint_t *insert_nodeint_at_index(listint_t **head,
unsigned int idx, int n); 10-delete_nodeint.c int delete_nodeint_at_index(listint_t **head, unsigned
int index); 100-reverse_listint.c listint_t *reverse_listint(listint_t **head); 101-print_listint_safe.c
size_t print_listint_safe(const listint_t *head); 102-free_listint_safe.c size_t
free_listint_safe(listint_t **h); 103-find_loop.c listint_t *find_listint_loop(listint_t *head); Tâches 📃
0. Imprimer la liste
0-print_listint.c : fonction C qui imprime tous les éléments d'une liste chaînée listint_t. Renvoie le
nombre de nœuds dans la liste listint_t.
1. Longueur de la liste
1-listint_len.c : fonction C qui renvoie le nombre d'éléments dans une liste chaînée listint_t. 2.
Ajouter un nœud
2-add_nodeint.c : fonction C qui ajoute un nouveau nœud au début d'une liste chaînée listint_t. Si
la fonction échoue - renvoie NULL. Sinon - renvoie l'adresse du nouvel élément. 3. Ajouter un
nœud à la fin
3-add_nodeint_end.c : fonction C qui ajoute un nouveau nœud à la fin d'une liste chaînée listint_t.
Si la fonction échoue - renvoie NULL. Sinon - renvoie l'adresse du nouvel élément. 4. Liste
gratuite
4-free_listint.c : fonction C qui libère une liste chaînée listint_t. 5. Gratuit
5-free_listint2.c : fonction C qui libère une liste chaînée listint_t. Définit la tête sur NULL. 6. Pop
6-pop_listint.c : fonction C qui supprime le nœud principal d'une liste chaînée listint_t. Si la liste
chaînée est vide - renvoie 0. Sinon - renvoie les données du nœud principal (n). 7. Obtenir le
nœud à l'index
7-get_nodeint.c : fonction C qui localise un nœud donné d'une liste chaînée listint_t. Si le nœud
n'existe pas - renvoie NULL. Sinon - renvoie le nœud localisé. 8. Liste de somme
8-sum_listint.c : Fonction C qui retourne la somme de toutes les données (n) d'une liste chaînée
listint_t. Si la liste chaînée est vide - renvoie 0. Sinon - renvoie la somme de toutes les données
(n). 9. Insérer
9-insert_nodeint.c : fonction C qui insère un nouveau nœud dans une liste chaînée listint_t à une
position donnée. S'il n'est pas possible d'ajouter le nouveau nœud à l'index idx, ou si la fonction
100-reverse_listint.c : fonction C qui inverse une liste chaînée listint_t en utilisant au maximum
une boucle et deux variables. Renvoie un pointeur sur le premier nœud de la liste inversée. 12.
Imprimer (version sécurisée)
101-print_listint_safe.c : fonction C qui imprime une liste chaînée listint_t en toute sécurité (c'està-dire peut libérer des listes contenant des boucles). Renvoie le nombre de nœuds dans la liste
listint_t. 13. Gratuit (version sécurisée)
102-free_listint_safe.c : fonction C qui libère une liste chaînée listint_t en toute sécurité (c'est-àdire peut libérer des listes contenant des boucles). Renvoie la taille de la liste qui a été libérée.
Définit la tête sur NULL. 14. Trouvez la boucle
103-find_loop.c : fonction C qui trouve la boucle contenue dans une liste chaînée listint_t en
utilisant un maximum de deux variables. Si aucune boucle n'est trouvée - renvoie NULL. Sinon -
renvoie l'adresse du nœud où la boucle commence.

