#include <stdio.h>
#include "dog.h"

/**
* print_dog - Print the values of dog struct
* @d: The dog struct whose value should be printed
*/
void print_dog (struct dog* d)
{
	char *nil = "(nil)";

	if (d == NULL)
		return;
	
	printf("Name: %s\n", d->name ? d->name : nil);
	printf("Name: %f\n", d->age);
	printf("Name: %s\n", d->owner ? d->owner : nil);
}

