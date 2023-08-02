#include "lists.h"
/**
 *
 * calculates the sum of all data in a list
 *
 */
int sum_listint(listint_t *head)
{
	int sum = o;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
