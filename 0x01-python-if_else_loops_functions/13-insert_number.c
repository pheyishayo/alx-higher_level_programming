#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list
 * @head: Pointer to a pointer pointing to the head of the list
 * @number: Number to be inserted
 *
 * Return: Address of the new node, or NULL if it fails
 */

listint_t *insert_node(listint_t **head, int number)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = number;
new_node->next = NULL;

if (*head == NULL || number < (*head)->n)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

listint_t *current = *head;
listing_t *prev = NULL;
while (current != NULL && current->n < number)
{
prev = current;
current = current->next;
}

new_node->next = current;
if (prev != NULL)
{
prev->next = new_node;
}
else
{
*head = new_node;
}
return (new_node);
}
