#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t len = 0;

    for (; h; h = h->next)
    {
        printf("%d\n, h->n");
        ++len;
    }

    return (len);
}