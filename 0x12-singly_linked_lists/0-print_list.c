#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_t :  prints all the elements of a list
 * @h: A linked list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h){
	size_t count = 0;

	while (h != NULL){
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}

	return count;
}
