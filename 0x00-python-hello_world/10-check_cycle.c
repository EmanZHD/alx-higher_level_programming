#include "lists.h"

/**
 * check_cycle - function that checks if a singly linked list has a cycle in it
 * @list: pointer
 * Return: return 0
*/

int check_cycle(listint_t* list)
{
	listint_t* slow;
	listint_t* fast;
	if (list == NULL || list->next == NULL)
	{
		return (0);
	}
	
	slow = list;
	fast = list->next;

	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			return (1);
		}
		
		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
