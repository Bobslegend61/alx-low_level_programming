#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Free the heap memory
* @p: Memory address to free
*/
void free_dog (dog_t *p)
{
	if (p)
		free(p);
		p = NULL;
}

