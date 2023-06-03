#include "lists.h"
/**
* listint_len - returns the lenght of a linked lists
* @h: linked list to be checked
*
* Return: returns number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

