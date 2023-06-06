#include "lists.h"

/**
 * insert_node - function that inserts a number into a sorted
 * singly likend list
 * @head: the pointer to pointer to singly linked list's head
 * @number: new number
 * Return: return a pointer to the new node or NULL for error
 */

listint_t	*insert_node(listint_t **head, int number)
{
	listint_t	*new;
	listint_t	*temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = NULL;
	if (*head == NULL || number < (*head)->n)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL && temp->next->n < number)
			temp = temp->next;
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}

