#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for dog
 * @name: dog name, type = char *
 * @age: dog age, type = float
 * @owner: dog owner, type = char *
 *
 * Description - Define a new type struct dog
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
