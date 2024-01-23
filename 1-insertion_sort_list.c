
#include "sort.h"
/**
 * nodes_swap - swap nodes in list
 * @a: first node
 * @b: second node
*/
void nodes_swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	b->next = a;
	a->prev = b;
}
/**
 * insertion_sort_list - a function that sorts a doubly linked list of integers
 * @list: list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = j->next;
		while (j != NULL && j->prev != NULL)
		{
			if (j != NULL && j->prev->n > j->n)
			{
				nodes_swap(j->prev, j);
				if (j->prev == NULL)
				{
					*list = j;
				}
				print_list((const listint_t *)*list);

			}
			else
			{
				j = j->prev;
			}
		}
	}

}
