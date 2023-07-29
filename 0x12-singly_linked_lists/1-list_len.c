#include<stdlib.h>
#include"lists.h"
/**
 * return the nmber of element in linked list
 */
size_t list_len(const list_t *h)
{
	size_t n=0;
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
