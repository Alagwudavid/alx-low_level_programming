#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @h: A linked list
  *
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *h){
	size_t count = 0;

	const list_t *current = head;
	while (current != NULL){
		count++;
		current = current->next;
	}

	return count;
}
