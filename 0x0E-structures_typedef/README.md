C - Structures, typedef TASKS 0. Poppy Définir un nouveau type struct dog avec les éléments
suivants :
nom, type = caractère *
âge, type = flottant
propriétaire, type = char *
1. Un chien est la seule chose sur terre qui vous aime plus que vous ne vous aimez
Écrivez une fonction qui initialise une variable de type struct dog
Prototype : void init_dog(struct dog *d, char *name, float age, char *owner);
1. Un chien vous apprendra l'amour inconditionnel. Si vous pouvez avoir cela dans votre
vie, les choses n'iront pas trop mal Écrivez une fonction qui imprime un struct dog
Prototype : void print_dog(struct dog *d);
Format : voir exemple ci-dessous
Vous êtes autorisé à utiliser la bibliothèque standard
Si un élément de d est NULL, affiche (nil) à la place de cet élément. (si le nom est NULL, écrivez
Nom : (nil))
Si d est NULL, n'affiche rien.
1. En dehors d'un chien, un livre est le meilleur ami de l'homme. À l'intérieur d'un chien, il
fait trop sombre pour être lu. Définissez un nouveau type dog_t comme nouveau nom pour
le type struct dog.
2. Une porte est ce qu'un chien est perpétuellement du mauvais côté d'Ecrire une fonction
qui crée un nouveau chien.
Prototype : dog_t *new_dog(char *name, float age, char *owner);
Vous devez stocker une copie du nom et du propriétaire
Renvoie NULL si la fonction échoue
1. Combien de pattes un chien a-t-il si vous appelez sa queue une patte ? Quatre. Dire
qu'une queue est une patte n'en fait pas une patte Écrivez une fonction qui libère les
chiens.
Prototype : void free_dog(dog_t *d);
