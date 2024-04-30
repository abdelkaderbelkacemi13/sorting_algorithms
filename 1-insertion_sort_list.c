#include "sort.h"

/**
 * swap_nodes - a function used to swap two nodes in a doubly linked list.
 * @node1: first node address.
 * @node2: second node address
*/

void swap_nodes(listint_t *node1, listint_t *node2)
{
	if (node1->prev != NULL)
	{
		node1->prev->next = node2;
	}
	if (node2->next != NULL)
	{
		node2->next->prev = node1;
	}
	node1->next = node2->next;
	node2->prev = node1->prev;
	node1->prev = node2;
	node2->next = node1;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 *      integers in ascending order
 * @list: pointer to the head node address
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *po1, *po2;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}
	po1 = (*list)->next;

	while (po1)
	{
		po2 = po1;
		po1 = po1->next;
		for (; po2 && po2->prev;)
		{
			if (po2->prev->n > po2->n)
			{
				swap_nodes(po2->prev, po2);
				if (po2->prev == NULL)
				{
					*list = po2;
				}
				print_list((const listint_t *)*list);
			}
			else
			{
				po2 = po2->prev;
			}
		}
	}
}
