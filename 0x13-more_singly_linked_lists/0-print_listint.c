#include"lists.h"
/**
 *print_listint
 *print all the element of a linked list
 *return numbers of nodes
 */
size_t print_listint(const listint_t*h)
{
	size_t num=0;
	while (h)
	{
		printf("%d\n",h->n);
		num++;
		h=h->next;
	}
	return(num);
}
