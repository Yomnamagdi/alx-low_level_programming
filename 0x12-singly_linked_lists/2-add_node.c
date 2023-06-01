#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to the first node of the list.
 * @str: The string value for the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
return (NULL);
unsigned int len = 0;
while(new_node->str[len])
len++;
new_node->len = len; 
new_node->next = (*head);  
(*head) = new;     	
return (*head);
}
