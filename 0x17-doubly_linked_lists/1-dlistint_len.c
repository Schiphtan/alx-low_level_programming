#include "lists.h"

/**
 * dlistint_len - Prints all elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
        size_t count = 0;

        if (h == NULL)
                return (count);

        while (h->prev != NULL)
                h = h->prev;

        while (h != NULL)
        {
                h = h->next;
                count++;
        }

        return (count);
}
