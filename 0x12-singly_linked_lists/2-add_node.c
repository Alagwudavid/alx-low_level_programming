#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node at the beginning of a list
  * @head: The original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str){
	if (str == NULL)
		return NULL;

		list_t *new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return NULL;

		new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
