#ifndef __SMART_PTR__
#define __SMART_PTR__

#include "lists.h"

/*--------------------------STRUCTS--------------------------*/


typedef struct
{
	list_t *stack;
}Smart_Ptr;


/*--------------------------PROTOTYPES--------------------------*/

void __init__(void) __attribute__((constructor));
void smart_Ptr_Destructor(void) __attribute__((destructor));
void* smart_Ptr_Init(void *ptr);
#endif
