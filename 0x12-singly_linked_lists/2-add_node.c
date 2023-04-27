#include "lists.h"

/**
*add_node - adds a new node at the beginning of a list_t list
*
*@head: head of the linked list
*
*@str: the string to store
*
*Return: address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;
	unsigned int n_ch;

	nw = malloc(sizeof(list_t));
	if (nw == NULL)
		return (NULL);

	nw->str = strdup(str);

	n_ch = 0;
	while (str[n_ch] != '\0')
	{
		n_ch++;
	}

	nw->len = n_ch;
	nw->next = *head;
	*head = nw;

	return (*head);
}
