#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_t - prints all the elements of a list
 * @h: A linked list
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h){	
	size_t nodes = 0;

	while (s != NULL)
	{
		if (s->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", s->len, s->str);
		s = s->next;
		nodes++;
	}

	return (nodes);
}
