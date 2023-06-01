#include <stdio.h>
#include "lists.h"
/**
* print_list - prints all the elements of a lis_tt
* @h: the pointer to the list to be printed
* Return: returns the number of printed nodes
*/
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count_nodes++;
	}
	return (count_nodes);
}

