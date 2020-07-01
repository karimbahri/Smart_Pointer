#ifndef __LINKED_LIST_
#define __LINKED_LIST_

/*--------------------------------STRUCTS--------------------------------*/

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	void *value;
	struct listint_s *next;
} listint_t;

/*------------------------------PROTOTYPES------------------------------*/

#endif
