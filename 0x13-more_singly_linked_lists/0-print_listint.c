#include "lists.h"

/**
 * print_listint - prints all  elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: The numb of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (w)
	{
		printf("%d\n", h->n);
		num++;
		w = w->next;
	}

	return (num);
}
