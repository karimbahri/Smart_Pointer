#include "smart_Ptr.h"
#include <stdio.h>
#include <stdlib.h>

/*------------------globalVariables--------------------*/
Smart_Ptr data;
/*------------------globalVariables--------------------*/

void __init__(void)
{
	printf("__INIT__ ...\n");
	
}

void* smart_Ptr_Init(void *ptr)
{
	ptr = malloc(sizeof(ptr));

	if (!ptr)
	{
		fprintf(stderr, "**Error: Malloc failure**");
		exit(EXIT_FAILURE);
	}
	//data.stack->value = ptr;
	//data.stack->next = NULL;
	add_node(&data.stack, ptr);

	return (ptr);
}

void smart_Ptr_Destructor(void)
{
	free_list(&data.stack);
}
