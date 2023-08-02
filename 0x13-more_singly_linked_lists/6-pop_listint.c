#include "lists.h"

/**
 *delets the head node of a linked list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return(0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*hhead = temp;

	return (num);
}
