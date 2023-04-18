# ifndef DOG_H
# définir  DOG_H

/*
* Fichier : chien.h
* Desc : Fichier d'en-tête qui définit un nouveau type struct dog.
 */

/* *
* struct dog - Informations de base sur un chien
* @nom : premier membre
* @âge : Deuxième membre
* @owner : troisième membre
 */


structure chien

{
	caractère *nom ;
	âge du flotteur ;
	caractère *propriétaire ;
} ;

/* *
* dog_t - Typedef pour chien
 */
typedef  struct dog dog_t ;

void  init_dog ( struct dog *d, char *name, float age, char *owner);
void  print_dog ( struct dog *d);
dog_t * new_dog ( char *nom, âge flottant , char *propriétaire);
void  free_dog ( dog_t *d);


# endif
