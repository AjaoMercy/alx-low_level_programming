#include "lists.h"

/**
*free_list -  frees a list_t list
*
*@head: the head of the list
*
*Return: void
*/

void free_list(list_t *head)
{
	list_t *cnt;

	while ((cnt = head) != NULL)
	{
		head = head->next;
		free(cnt->str);
		free(cnt);
	}
}
