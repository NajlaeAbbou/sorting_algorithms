#include"sort.h"
/**
 * _swap_ahead - Swap a node in a listint_t doubly-linked list
 * @list: A pointer to the head list
 * @tail: A pointer to the tail list
 * @shaker: A pointer to the current swapp
 */
void _swap_ahead(listint_t **list, listint_t **tail, listint_t **shaker)
{
        listint_t *tmp = (*shaker)->next;

        if ((*shaker)->prev != NULL)
                (*shaker)->prev->next = tmp;
        else
                *list = tmp;
        tmp->prev = (*shaker)->prev;
        (*shaker)->next = tmp->next;
        if (tmp->next != NULL)
                tmp->next->prev = *shaker;
        else
                *tail = *shaker;
        (*shaker)->prev = tmp;
        tmp->next = *shaker;
        *shaker = tmp;
}


/**
 * _swap_behind - Swap a node in a listint_t doubly-linked
 * @list: A pointer to the head list
 * @tail: A pointer to the tail list
 * @shaker: A pointer to the current swapping node
 */
void _swap_behind(listint_t **list, listint_t **tail, listint_t **shaker)
{
        listint_t *tmp = (*shaker)->prev;

        if ((*shaker)->next != NULL)
                (*shaker)->next->prev = tmp;
        else
                *tail = tmp;
        tmp->next = (*shaker)->next;
        (*shaker)->prev = tmp->prev;
        if (tmp->prev != NULL)
                tmp->prev->next = *shaker;
        else
                *list = *shaker;
        (*shaker)->next = tmp;
        tmp->prev = *shaker;
        *shaker = tmp;
}
