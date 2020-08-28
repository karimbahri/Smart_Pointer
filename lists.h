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
typedef struct list_s
{
	void *value;
	struct list_s *next;
} list_t;

/*------------------------------PROTOTYPES------------------------------*/
list_t *add_node(list_t **head, void *v);
void free_list(list_t **head);
#endif
