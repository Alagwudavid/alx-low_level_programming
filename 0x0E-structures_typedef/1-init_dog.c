#include "dog.h"
#include <stdio.h>
#include <stdlib>

/*
 * main - initialize variable of type struct dog
 * @d: A dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner){
	if (d != NULL){
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
