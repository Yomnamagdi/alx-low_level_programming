#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: Pointer to the head node of the linked list.
 */
void free_listint(listint_t *head)
{
while (head != NULL)
{
listInt *temp = head;
head = head->next;
free(temp);
}
}
