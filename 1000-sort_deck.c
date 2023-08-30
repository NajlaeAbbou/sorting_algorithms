#include "deck.h"
#include "funct_deck.c"

/**
 * sort_deck - Sort a deck of cards from ace to king
 * @deck: A pointer to the head of the doubly-linked list
 */
void sort_deck(deck_node_t **deck)
{
	if (deck == NULL || *deck == NULL || (*deck)->next == NULL)
		return;

	insertion_kind(deck);
	insertion_value(deck);
}
