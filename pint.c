#include "monty.h"

/**
 * f_pint - Starts to print the top
 * @head: Specifies stack head
 * @counter: Specifies line_number
 * Return: The no return
*/

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
