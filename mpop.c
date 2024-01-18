#include "monty.h"

/**
 * f_pop - Starts to print the top
 * @head: Specifies stack head
 * @counter: Specifies line_number
 * Return: The no return (Ends)
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
