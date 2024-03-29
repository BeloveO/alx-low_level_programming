#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - stores some information about a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the dog owner
 * File: dog.h
 * Auth: Belove Olusola
 * Desc: Header file for 0x0E-structures_typedef.
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
