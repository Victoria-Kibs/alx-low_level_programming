#include "lists.h"

/**
 * print_listint_safe - Prints a linked list of integers
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *next;
	size_t c = 0;

	if (head == NULL)
		exit(98);

	current = head;
	while (current != NULL)
	{
		c++;
		printf("[%p] %d\n", (void *)current, current->n);
		next = current->next;
		if (next >= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
		current = next;
	}
	return (c);
}
