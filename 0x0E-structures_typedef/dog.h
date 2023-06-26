#ifndef _HEADER_
#define _HEADER_

/**
 * Description - Define a new type struct dog
 * @name: dog name, type = char *
 * @age: dog age, type = float
 * @owner: dog owner, type = char *
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
