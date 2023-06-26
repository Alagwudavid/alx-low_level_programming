#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * print_dog - Prints a struct dog
 * @d: A dog structure
 *
 * Return: Always 0
 */

void print_dog(struct dog *d){
	if (d != NULL){
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
