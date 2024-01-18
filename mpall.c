#include "monty.h"

/**
 * f_pall - Starts to print the stack
 * @head: Specifies stack head
 * @counter: Specifies the no used
 * Return: The no return (Ends)
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
