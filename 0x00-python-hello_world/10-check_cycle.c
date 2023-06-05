#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: Type list
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1
 */

int check_cycle(listint_t *head)
{
	int *node1, *node2;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		node1 = (int *)&head;
		node2 = (int *)&head->next;
		if (head->next == NULL)
			return (0);

		if (*node1 - *node2 <= 0)
			return (1);

		head = head->next;
	}
	return (0);
}
