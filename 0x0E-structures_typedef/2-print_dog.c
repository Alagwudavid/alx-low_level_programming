#include "dog.h"
#include <stdlib.h>

/*
 * print_dog - prints a struct dog
 * d: NULL.
 * 
 * Return: Always 0
 */

void print_dog(struct dog *d){
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	printf("Age: %f\n", (d->age) ? d->age : 0);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
