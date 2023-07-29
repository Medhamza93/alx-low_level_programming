#include<stdio.h>
#include"lists.h"
/**
 * print_list
 *
 * return the number of nods
 */
size_t print_list(const list_t*h)
{
	size_t s = 0;
	while (h)
	{
		if(!h->str)
			printf("[0](null)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return(s);
}
