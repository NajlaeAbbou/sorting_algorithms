#include "sort.h"
#include "funct_sort1.c"

/**
 * cocktail_sort_list - Sorts a doubly linked list of int
 * @list: A pointer to the head of the list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *ta, *sh;
	bool signal = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (ta = *list; ta->next != NULL;)
		ta = ta->next;

	while (signal == false)
	{
		signal = true;
		for (sh = *list; sh != ta; sh = sh->next)
		{
			if (sh->n > sh->next->n)
			{
				_swap_ahead(list, &ta, &sh);
				print_list((const listint_t *)*list);
				signal = false;
			}
		}
		for (sh = sh->prev; sh != *list;
				sh = sh->prev)
		{
			if (sh->n < sh->prev->n)
			{
				_swap_behind(list, &ta, &sh);
				print_list((const listint_t *)*list);
				signal = false;
			}
		}
	}
}

