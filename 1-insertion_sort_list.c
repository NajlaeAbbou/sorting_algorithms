#include "sort.h"

/**
 * insertion_sort_list - Sorts an doubly linked list
 * of integers asc.
 * @list: The list to sort
 */
void insertion_sort_list(listint_t **list)
{
	bool s = false;
	listint_t *tp = NULL, *t = NULL;

	if (!list || !(*list) || !(*list)->next)
		return;

	tp = *list;
	while (tp->next)
	{
		if (tp->n > tp->next->n)
		{
			tp->next->prev = tp->prev;
			if (tp->next->prev)
				tp->prev->next = tp->next;
			else
				*list = tp->next;

			tp->prev = tp->next;
			tp->next = tp->next->next;
			tp->prev->next = tp;
			if (tp->next)
				tp->next->prev = tp;

			tp = tp->prev;
			print_list(*list);

			if (tp->prev && tp->prev->n > tp->n)
			{
				if (!s)
					t = tp->next;
				s = true;
				tp = tp->prev;
				continue;
			}
		}
		if (!s)
			tp = tp->next;
		else
			tp = t, s = false;
	}
}
