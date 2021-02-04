#include "sort.h"
#include <stdio.h>



/**
 * print_all - print all params
 * @list: a list
 * Return: nothing
 */

void print_all(listint_t *list)
{
	while (list)
	{
		if (list->prev)
			printf("node->prev = %d\n", list->prev->n);
		printf("node->n = %d\n", list->n);
		if (list->next)
			printf("node->next = %d\n\n", list->next->n);
		list = list->next;
	}
}

/**
 * move_node - move the node
 * @list: the doubly linked list to use
 * @node: the node to move
 * Return: nothing
 */

int move_node(listint_t **list, listint_t *node)
{
	if (node->next)
	{
		node->next->prev = node->prev;
	}
	else
	{
		node->prev->next = NULL;
	}
	if (node->prev && node->next)
	{
		node->prev->next = node->next;
	}
	if (node->prev->prev)
	{
		node->prev = node->prev->prev;
		node->next = node->prev->next;

		node->prev->next = node;
		node->next->prev = node;
	}
	else
	{
		node->next = node->prev;
		node->prev = NULL;
		node->next->prev = node;
		*list = node;
		print_list(*list);
		return (1);
	}
	print_list(*list);
	return (0);
}


/**
 * insertion_sort_list - sort a doubly linked list
 * @list: the doubly linked list
 * Return nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *save;

	node = *list;
	node = node->next;

	if (*list)
	{
		while (node)
		{
			save = node;
			while (node->n < node->prev->n)
			{
				if (move_node(list, node) == 1)
					break;
			}
			node = save;
			if (node->next)
				node = node->next;
			else
				break;
		}
	}
}
