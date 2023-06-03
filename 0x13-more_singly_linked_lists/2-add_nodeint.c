#include "lists.h"
/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @head: pointer to the first node of listint_t list
* @n: data to be insert in the new node
*
* Return: returns a pointer to the new node,
* and NULL for failure
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if(!newnode )
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

