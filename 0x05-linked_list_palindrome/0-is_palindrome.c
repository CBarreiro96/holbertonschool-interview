#include "lists.h"

/**
 * change_order - Function to reverse the list
 * @head: head of the list
 * Return: Nothing (void)
 */

void change_order(listint_t **head)
{
	listint_t *current = *head;
	listint_t *identifier = NULL;
	listint_t *n = NULL;

	while (current)
	{
		n = current->next;
		current->next = identifier;
	    identifier = current;
		current = n;
	}
	*head = identifier;
}

/**
 * Middle - Function to split the list
 * @head: head of the list
 * Return: the middle of the list
 */

listint_t *Middle(listint_t **head)
{
	listint_t *middle_identifier = *head;
	listint_t *final_identifier = *head;

	while (final_identifier && final_identifier->next)
	{
		middle_identifier = middle_identifier->next;
		final_identifier = final_identifier->next->next;
	}
	return (middle_identifier);
}

/**
 * is_palindrome - Function that checks if a singly linked list is a palindrome
 * @head: head of the list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *mid;
	int count = 0;

	if (*head == NULL)
		return (1);

	mid = keepMiddle(head);

	/** reverse the list */
	reverse(&mid);

	/** compare the lists */
	while (mid)
	{
		if (mid->n != (*head)->n)
			return (0);
		*head = (*head)->next;
		mid = mid->next;
		count = 1;
	}
	if (count == 1)
		return (1);
	return (0);
}
