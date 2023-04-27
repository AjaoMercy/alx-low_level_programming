#include "lists.h"

/**
*add_node_end - adds a new node at the end of a list_t list
*
*@head: the head of the list
*
*@str: string to store
*
*Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *nw;
	unsigned int n_ch;

	nw = malloc(sizeof(list_t));
	if (nw == NULL)
	{
		return (NULL);
	}

	nw->str = strdup(str);

	n_ch = 0;

	while (str[n_ch] != '\0')
	{
		n_ch++;
	}

	nw->len = n_ch;
	nw->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = nw;
	}

	return (*head);

}
