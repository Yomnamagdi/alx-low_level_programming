#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: Pointer to the head node of the linked list.
 * @n: Value to be added as data for new node.
 *
 * Return: The address of the new element if successful, otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode = (listint_t *) malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
return (newNode);
}
listtoint_ t *currentNode = (*head);
while (currentNode->next != NULL)
{
currentNode = currentNode->next;
}
currentNode->next = newNode;
return (newNode);
}
